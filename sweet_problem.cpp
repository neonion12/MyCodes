#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t; cin>>t;
    while(t--){
    
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3); 
    
    
    if(a[1]==a[2]) cout<<a[1]+a[0]/2<<endl;
    else{
    
    ll k=a[0]+a[1]-a[2];
    
    if(k<=0) cout<<a[0]+a[1]<<endl;
    else cout<<a[2]+k/2<<endl;
    
    }
    }
}