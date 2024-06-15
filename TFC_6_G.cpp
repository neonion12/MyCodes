#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    long long int n,q,x,y,m,sum=0,self,del=0;
       cin>>n;
       vector<long long> ar(n+1);
      for(int i=1;i<=n;i++){
        cin>>ar[i];
        ar[i] += ar[i-1];
      }
    cin >> tc;
    while(tc--){
      cin>>x>>y>>m;
      cout<<min(max(x,ar[n]),ar[m]+y)<<endl;
    }          
  return 0 ; 
}
