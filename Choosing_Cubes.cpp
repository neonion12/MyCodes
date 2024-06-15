#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int tc;
    cin >> tc;

    while(tc--){
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int fav_value = a[f - 1];

        sort(a.begin(), a.end(), greater<int>());

        // Count the occurrences of fav_value in the top k elements
        int fav_count_top_k = 0;
        for(int i = 0; i < k; ++i) {
            if(a[i] == fav_value) {
                fav_count_top_k++;
            }
        }

        // Count the total occurrences of fav_value in the array
        int fav_count_total = count(a.begin(), a.end(), fav_value);

        if(fav_count_top_k == fav_count_total) {
            cout << "YES" << endl;
        } else if(fav_count_top_k == 0) {
            cout << "NO" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }

    return 0;
}
