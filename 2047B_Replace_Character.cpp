#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a,b,c,x,y,z,count=0,n,m,tc;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--){
        cin>>n;
        map<char,int> M;
        string s;
        cin>>s;
        for(char c : s)
        {
            M[c]++;
        }
        vector<pair<char,int>> freqV(M.begin(),M.end());
        sort(freqV.begin(),freqV.end(),[](const auto& a, const auto& b){
            return a.second < b.second;
        });
         char minChar = freqV.front().first;
         char maxChar = freqV.back().first;
        // cout<<minChar<<"  "<<maxChar<<endl;
         for(int i=0;i<s.size();i++)
         {
             if(s[i]==minChar)
             {
                 s[i]=maxChar;
                 goto neon;
             }
         }
         neon:
         cout<<s<<endl;
    }          
  return 0 ; 
}