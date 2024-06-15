#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int max_sum = 0;
        int optimal_x = 2;

        for (int x = 2; x <= n; ++x) {
            int sum = 0;
            for (int k = 1; k * x <= n; ++k) {
                sum += k * x;
            }
            if (sum > max_sum) {
                max_sum = sum;
                optimal_x = x;
            }
        }

        cout << optimal_x << endl;
    }
    return 0;
}
