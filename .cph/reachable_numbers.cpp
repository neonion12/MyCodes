#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll n; cin>>n;
ll ans=0;
while(n/10!=0){
    ll t=n%10;
    ans+=10-t;
    n+=10-t;
    while(n%10==0){
        n/=10;
    }
}
ans+=9;
cout<<ans;
}