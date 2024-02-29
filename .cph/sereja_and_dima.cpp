#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; ++i)
    {
        cin >> a[i];
    }
    int s = 0, d = 0, l = 0, r = t - 1, z = 0;
    while (l <= r)
    {
        if (z % 2 == 0)
        {
            if (a[l] > a[r])
            {
                s += a[l];
                l++;
            }
            else
            {
                s += a[r];
                r--;
            }
        }
        else
        {
            if (a[l] > a[r])
            {
                d += a[l];
                l++;
            }
            else
            {
                d += a[r];
                r--;
            }
        }
        z++;
    }
    cout<<s<<" "<<d<<endl;

    return 0;
}