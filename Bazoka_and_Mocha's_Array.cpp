#include <bits/stdc++.h>
using namespace std;
long long int a[100000];
int main()
{

    long long int tcc, i, j, n, e, g, p, k, kib,s;

    cin >> tcc;
    for (i = 0; i < tcc; ++i)
    {
        cin >> n;
        for (j = 0; j < n; ++j)
        {
            cin >> a[j];
        }

        e = 0;
        p = 0;
        for (j = 0; j < n; ++j)
        {
            if (a[j] >= e)
            {
                e = a[j];
            }
            else
            {
                break;
            }
        }

        if (j == n)
        {
            cout << "YES" << endl;
            goto kib;
        }

        for (j = j; j < n - 1; ++j)
        {
            if (a[j] <= a[j + 1])
            {
                p = 0;
            }
            else
            {
                p = 1;
                break;
            }
        }

        if (p == 1)
        {
            cout << "NO" << endl;
        }

        else
        {

            if (a[n - 1] <= a[0])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

    kib:
    {
    }
        
    }
    
}