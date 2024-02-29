#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;
    map<long long, int> prefixSum;
    long long count = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];

        if (sum == x) {
            count++;
        }

        if (prefixSum.find(sum - x) != prefixSum.end()) {
            count += prefixSum[sum - x];
        }

        prefixSum[sum]++;
    }

    cout << count << endl;

    return 0;
}
