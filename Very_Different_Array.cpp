#include <bits/stdc++.h>
#define Ne_is_ON int main()
#define OkkByee return 0
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using ll = long long;
using namespace std;

Ne_is_ON
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        ll d = 0;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + m, greater<int>());
        for (int i = 0; i < n; i++)
        {
            d = d + max(abs(a[i] - b[i]), abs(a[i] - b[m - n + i]));
        }
        cout << d << endl;
    }

    OkkByee;
}
