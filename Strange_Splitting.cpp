#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        ll n,n1,n2,n3;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;++i){
            cin>>a[i];
        }
        int y,x=a[0];
        for(ll i=0;i<n;++i){
            y=i;
            if(a[i]!=x){
                goto n1;
            }
        }
        if(y==n-1){
            goto n2;
        }
        n1:
        cout<<"YES"<<endl;
        if(y==n-1){
            y=y-1;
        }
        for(int i=0;i<n;++i){
            if(i==y){
                cout<<"B";
            }
            else{
                cout<<"R";
            }
        }
        cout<<endl;
        goto n3;
        n2:
        cout<<"NO"<<endl;
        n3:{}
        
    }          
  return 0 ; 
}