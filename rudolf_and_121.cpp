#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       for(int i=0;i<n;i++){
        while(a[i]>0 && i+2<=n-1){
            a[i]=a[i]-1;
            a[i+1]=a[i+1]-2;
            a[i+2]=a[i+2]-1;
        }
       }
       bool r=true;
       for(int i=0;i<n;i++){
            if(a[i]!=0){
                r=false;
                break;
            }
       }
       if(r){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }


    }         
    
}