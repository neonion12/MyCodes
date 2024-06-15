#include<bits/stdc++.h>
#define Ne_is_ON int main()
#define OkkByee return 0
#define vi vector<int>
#define pii pair<int,int>
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
        int n, c1 = 0, c2 = 0, d = 0, r = 0, h = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                c1++;
            }
            if (b[i] == '1')
            {
                c2++;
            }
            if (a[i] != b[i])
            {
                d++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] == '0')
            {
                if (c1 > c2)
                {
                    r++;
                    c1--;
                }
                else
                {
                    h++;
                    if (h == 2)
                    {
                        r++;
                        h = 0;
                        c1--;
                        c2--;
                    }
                }
            }
            else if (a[i] == '0' && b[i] == '1')
            {
                if (c1 < c2)
                {
                    r++;
                    c2--;
                }
                else
                {
                    h++;
                    if (h == 2)
                    {
                        r++;
                        h = 0;
                        c1--;
                        c2--;
                    }
                }
            }
        }

        cout << r << endl;
    }

    OkkByee;
}
