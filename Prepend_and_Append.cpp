#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        if (s[l]==s[r])
        {
            cout << n << endl;
        continue;
        }
        else 
        {
            while((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0')){
                l++;
                r--;
                n=n-2;
            }
            if(n<0){
                n=0;
            }
            cout<<n<<endl;
        }
    }

    return 0;
}