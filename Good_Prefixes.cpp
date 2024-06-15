#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        ll n,s=0,e=0,r;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;++i){
            cin>>a[i];
        }
        ll count=0;
        for(ll i=0;i<n;++i){
            s=s+a[i];
            e=max(e,a[i]);
            if(s==e*2){
                count++;
            }
        }
        cout<<count<<endl;
    }          
  return 0 ; 
}