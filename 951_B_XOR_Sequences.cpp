#include <iostream>
#include <bitset>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        unsigned int x, y;
        cin >> x >> y;

        unsigned int z = x ^ y;
        // Find the smallest power of 2 that divides (z + 1)
        unsigned int length = (z + 1) & (~z);

        cout << length << "\n";
    }

    return 0;
}
