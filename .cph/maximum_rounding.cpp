#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;

        int n = x.size();
        int ans = 0, carry = 0;

        for (int i = n - 1; i >= 0; i--) {
            int digit = x[i] - '0';
            int rounded = (digit + carry + 5) / 10 * 10;

            ans = ans * 10 + rounded;

            if (rounded > digit) {
                carry = 1;
            } else {
                carry = 0;
            }
        }

        if (carry) {
            ans = ans * 10 + 10;
        }

        cout << ans << "\n";
    }

    return 0;
}
