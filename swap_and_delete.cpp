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
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0')
                c0++;
            else
                c1++;
        }
        int cnt=0; 
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0')
            {
                if(c1==0){
                    break;
                }
                c1--;
                cnt++;
            }
            else
            {
               if(c0==0){
                    break;
                }
                c0--;
                cnt++; 
            }
        }
        cout << s.size() - cnt << endl;

        
    }
    OkkByee;
}
