#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        long long int x,y,z=1,n;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;++i){
            cin>>a[i];
        }
        sort(a,a+n);
        x=a[0];
        // y=a[0];
        for(int i=1;i<n;++i){
            if(a[i]%x!=0){
                y=a[i];
                break;
            }
        }
        for(long long int i=2;i<n;++i){
            if(a[i]%x==0 || a[i]%y==0){
                z=1;
            }
            else{
                z=0;
                break;
            }
        }
        if(z==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }          
  return 0 ; 
}