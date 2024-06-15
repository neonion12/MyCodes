#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
       long long int n,m,k,r=0;
        cin>>n>>m>>k;
        long long int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
            if(a[i]%m==0){
                r=r+a[i]/m;
            }
            else{
                if((a[i]-k)>0){
                    r=r+(a[i]-k)/m;
                }
            }
        }
        
        cout<<r<<endl;
    }          
  return 0 ; 
}