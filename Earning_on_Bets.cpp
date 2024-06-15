#include <bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

bool check_bets(const vector<int>& k, const vector<long long>& bets) {
    long long total_bet = accumulate(bets.begin(), bets.end(), 0LL);
    for (int i = 0; i < k.size(); ++i) {
        if (total_bet >= bets[i] * k[i]) {
            return false;
        }
    }
    return true;
}

vector<long long> generate_bets(int n) {
    vector<long long> bets(n);
    for (int i = 0; i < n; ++i) {
        bets[i] = uniform_int_distribution<int>(1, 10000)(rng);
    }
    return bets;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> k(n);
        for (int i = 0; i < n; ++i) {
            cin >> k[i];
        }

        bool found = false;
        vector<long long> bets;
        for (int attempt = 0; attempt < 1000000; ++attempt) { // Try up to 1000 different sets of bets
            bets = generate_bets(n);
            if (check_bets(k, bets)) {
                found = true;
                break;
            }
        }

        if (found) {
            for (int i = 0; i < n; ++i) {
                cout << bets[i] << ' ';
            }
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}
