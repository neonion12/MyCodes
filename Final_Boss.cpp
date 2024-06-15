#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int64_t a, b, c, x, y, z, h, n21, cnt = 0, n, m, tc;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while (tc--)
    {
        cin >> h >> n;
        int64_t ar[n], cr[n], copy[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> cr[i];
            copy[i] = cr[i];
        }

        while (1)
        {
            for (int i = 0; i < n; ++i)
            {
                if (copy[i] == cr[i])
                {
                    h = h - ar[i];
                    copy[i] = 0;
                }
                copy[i] = copy[i] + 1;
            }
            cnt++;
            if (h <= 0)
            {
                goto n21;
            }
        }
    n21:

        cout << cnt << endl;
        cnt=0;
    }
    return 0;
}