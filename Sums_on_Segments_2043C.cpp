#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Size of the array

        vector<ll> arr(n);
        vector<ll> brr(n);
        set<ll> unique_values;

        // Input the array and copy to brr
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            brr[i] = arr[i];
        }

        // Sort brr and perform prefix sum
        sort(brr.begin(), brr.end());
        for (int i = 1; i < n; i++) {
            brr[i] += brr[i - 1];
        }

        // Insert prefix sum of sorted brr into the set
        for (int val : brr) {
            unique_values.insert(val);
        }

        // Count occurrences of -1 and 1 in arr
        int count_neg1 = 0, count_pos1 = 0;
        ll big_value = 0;
        for (ll val : arr) {
            if (val == -1) {
                count_neg1++;
            } else if (val == 1) {
                count_pos1++;
            } else {
                big_value = val; // Assume there is only one "big value"
            }
        }

        // Reconstruct brr with -1, big value, and 1's
        brr.clear();
        brr.resize(count_neg1, -1);
        if (big_value != 0) {
            brr.push_back(big_value);
        }
        brr.insert(brr.end(), count_pos1, 1);

        // Perform prefix sum on the reconstructed brr
        for (int i = 1; i < brr.size(); i++) {
            brr[i] += brr[i - 1];
        }

        // Insert prefix sum of reconstructed brr into the set
        for (int val : brr) {
            unique_values.insert(val);
        }
        // Print the set
        cout << unique_values.size() << endl; // Print size of the set
        for (int val : unique_values) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
