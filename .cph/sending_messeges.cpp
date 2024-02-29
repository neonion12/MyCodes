#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, f, a, b;
        cin >> n >> f >> a >> b;
        long long int m[n];
        for (int i = 0; i < n; ++i) {
            cin >> m[i];
        }
        ll maxx = max(a, b);
        bool r = true;
        ll j = 0;
        for (ll i = 0; i < n; i++) {
            if ((m[i] - j) * a < b) {
                f = f - (m[i] - j) * a;
            } else {
                f = f - b;
            }
            j = m[i];
            if (f <= 0) {
                r = false;
                break;
            }
        }
        if (r) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
