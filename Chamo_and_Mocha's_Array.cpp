#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int n, ans = 0;
        cin >> n;
        long long int a[n];
        for (long long int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (long long int i = 0; i < n - 1; ++i)
        {
            ans = max(ans, min(a[i], a[i + 1]));
        }
        for (long long int i = 0; i < n - 2; ++i)
        {
            ans = max(ans, min(a[i], a[i + 2]));
        }
        cout << ans << endl;
    }
    return 0;
}

