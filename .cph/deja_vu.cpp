#include <bits/stdc++.h>
#define Ne_is_ON int main()
#define OkkByee return 0
using ll = long long;
using namespace std;
Ne_is_ON
{
    ll t, n, q;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        int a[n], x[q];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < q; j++)
        {
            cin >> x[j];
        }
        set<ll> hs;
        for (int i = 0; i < q; i++)
        {
            if(hs.count(x[i])) continue;     // array x contains numbers from 1 to 30 only so this set will help
            hs.insert(x[i]);                //  update the array a not q times but atmost 30 times 
            for (int j = 0; j < n; j++)
            {
              if(a[j] % (1 << x[i])==0) a[j] += (1<<(x[i]-1)); 
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
        cout<<endl;
    }

    OkkByee;
}