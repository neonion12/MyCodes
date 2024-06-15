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
        string s,r="";
        cin >> s;
        int b=0,B=0;
        for(int i=s.size()-1;i>-1;i--){
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B' && s[i]!='b'){
                if(B>0){
                    B--;
                    continue;
                }
                else{
                    r.push_back(s[i]);
                }
            }
            if(s[i]>='a' && s[i]<='z' && s[i]!='B' && s[i]!='b'){
                if(b>0){
                    b--;
                    continue;
                }
                else{
                    r.push_back(s[i]);
                }
            }
            if(s[i]=='B'){
                B++;
            }
            if(s[i]=='b'){
                b++;
            }
        }
        reverse(r.begin(),r.end());
        cout<<r<<endl;
    }
    OkkByee;
}
