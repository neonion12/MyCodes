#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int a[n];
        int maxElement = -99;
        
        // Find the maximum element in the array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            maxElement = max(maxElement, a[i]);
        }

        // Initialize array b with zeros
        int b[maxElement + 1];
        memset(b, 0, sizeof(b));
        
        // Count the frequency of each element
        for (int i = 0; i < n; i++) {
            b[a[i]]++;
        }

        // Find the elements that occur more than once
        int c[2], cnt = 0;
        for (int i = 0; i <= maxElement; i++) {
            if (b[i] > 1 && cnt < 2) {
                c[cnt] = i;
                cnt++;
            }
        }

        // If exactly two elements occur more than once, mark them accordingly
        if (cnt == 2) {
            int cd[n];
            memset(cd, 1, sizeof(cd));
            for(int i=0;i<n;i++){
                cd[i]=1;
            }
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < n; j++) {
                    if (c[i] == a[j] && cd[j] != 2) {
                        cd[j] = (i == 0) ? 2 : 3;
                        break;
                    }
                }
            }
            
            // Output the result
            for (int i = 0; i < n; i++) {
                cout << cd[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
