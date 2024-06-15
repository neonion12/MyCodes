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
        long long int n, dc, c, j, r=0;
        cin >> n;
        dc = n;
        while (n != 0)
        {
            n = n / 10;
            c++;
        }
        n = dc;
        if (c % 2 == 0)
        {
            long long b = 1, s = 10;
            while (c != 0)
            {
                
                for (long long int i = 1; i < c-1; ++i)
                {
                    b = b * 10;
                    s = s * 10;
                }
                b--;
                s--;
                r = r + s - b;
                c = c - 2;
                b=1;
                s=10;
            }
            // r=r+9;
            cout<<r<<endl;
        }
        else
        {
            long long int xb=1,xs=10;
            for(long long int i=1;i<c;++i){
                xb=xb*10;
            }
            r = r + n - (xb - 1);
            
            c = c - 1;
            long long b = 1, s = 10;
            while (c != 0)
            {
                
                for (long long int i = 1; i < c-1; ++i)
                {
                    b = b * 10;
                    s = s * 10;
                }
                b--;
                s--;
                r = r + s - b;
                c = c - 2;
                b=1;
                s=10;
            }
            cout<<r<<endl;

        }
    }
    return 0;
}