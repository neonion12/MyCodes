#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Find the index of the maximum and minimum heights
    int max_index = 0, min_index = 0;
    for (int i = 1; i < n; i++) {
        if (heights[i] > heights[max_index]) {
            max_index = i;
        }
        if (heights[i] <= heights[min_index]) {
            min_index = i;
        }
    }

    // Sort the array except for the last element
    sort(heights.begin(), heights.end() - 1);

    // Swap the last element with the new maximum if necessary
    if (heights[n-2] <= heights[max_index]) {
        swap(heights[n-1], heights[max_index]);
    }

    // Count the number of swaps required
    int swaps = max_index + (n - 1 - min_index);
    if (max_index > min_index) {
        swaps--;
    }

    cout << swaps << endl;

    return 0;
}
