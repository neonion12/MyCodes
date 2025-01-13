#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



/*Declare a Map , take input from a string and store the frequency of all the dintinct character of that string , sort a map by second value , check which character have least frequency and which one have most frequency
map<char,int> M;
for(char c : s)
{
M[c]++;
}
vector<pair<char,int>> freqV(M.begin(),M.end());
sort(freqV.begin(),freqV.end(),[](const auto& a, const auto& b){
return a.second < b.second;
});
char minChar = freqV.front().first;
char maxChar = freqV.back().first;*/
ll a,b,cc,x,y,z,count=0,n,m,tc;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--){
        bool flag=true;
        cin>>n;
        ll a[n];
        ll b[n];
        for(ll i=0;i<n;++i)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;++i)
        {
            cin>>b[i];
        }
        y=b[0]-a[0];
        z=0;
        for(ll i=1;i<n;++i)
        {
            x=b[i]-a[i];
            if(x>y)
            {
                y=x;z=i;
            }
        }
        for(ll i=0;i<n;++i)
        {
            if(i!=z)
            {
                a[i]=a[i]-y;
                if(a[i]<b[i])
                {
                  flag=false;  
                }
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }          
  return 0 ; 
}