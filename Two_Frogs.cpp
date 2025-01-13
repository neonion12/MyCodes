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
ll a,b,c,x,y,z,count=0,n,m,tc;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--){
        cin>>n>>a>>b;
        m=abs(a-b);
        if(m%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }          
  return 0 ; 
}