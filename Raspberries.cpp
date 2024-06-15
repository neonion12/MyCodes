#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int tc;
    cin >> tc;
    
    while (tc--) {
        int n, k, cnt = 0;
        cin >> n >> k;
        int a[n], b[n], c[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i] % k;
            c[i] = a[i] % 2;
            if (c[i] == 1) {
                cnt++;
            }
        }
        
        sort(b, b + n);
        
        if (k != 4) {
            if (b[0] == 0) {
                cout << 0 << endl;
            } else {
                cout << k - b[n - 1] << endl;
            }
        } else {
            sort(c, c + n);
            int ans[3];
            ans[0] = 99;
            ans[1] = 99;
            ans[2] = 99;
            
            if (b[0] == 0) {
                cout << 0 << endl;
                continue;
            } else if (c[0] == 0 && c[1] == 0) {
                cout << 0 << endl;
                continue;
            }
            
            if (b[n - 1] == 3 || (c[0] == 0 && c[n - 1] == 1)) {
                ans[0] = 1;
            }
            if (cnt > 1 || (b[n - 1] == 2)) {
                ans[1] = 2;
            }
            ans[2] = k - b[n - 1];
            sort(ans, ans + 3);
            int r = ans[0];
            cout << r << endl;
        }
    }
    
    return 0;
}
