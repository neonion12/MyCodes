#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a[3];
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
        }
        sort(a, a + 3);
        if (a[2] + a[1] >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}