#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    const unsigned int M = 1000000007;
    long long int tc;
    cin >> tc;

    while (tc--) {
        long long int n;
        cin >> n;

        long long int r = 1, g = 1, b = 1,newR,newG,newB;

        for (int i = 2; i <= n; ++i) {
            newR = r*1 +g*4 +b*7;
            newG = r*2 +g*5 +b*8;
            newB = r*2 +g*6 +b*9;

            r = newR;
            g = newG;
            b = newB;
        }

        cout << (newR%M + newG%M + newB%M) % M << endl;
    }

    return 0;
}
