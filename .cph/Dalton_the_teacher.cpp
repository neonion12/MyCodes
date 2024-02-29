#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, c = 0;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i+1 == a[i])
            {
                c++;
            }
        }

        if (c == 0 || c == 1)
        {
            cout << c << endl;
        }
        else if (c % 2 == 0 && c != 0)
        {
            cout << c / 2 << endl;
        }
        else if (c % 2 == 1 && c != 1)
        {
            cout << c/2 + 1 << endl;
        }
        c = 0;
    }

    return 0;
}