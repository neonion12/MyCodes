#include<bits/stdc++.h>
#define     Ne_is_ON     int main()
#define     OkkByee      return 0
using ll = long long int;
using namespace std;
Ne_is_ON
{
 int t;
 cin>>t;
 while(t--){
    ll x;
    cin>>x;
    ll y=x;
    while(x!=0){
       y=y+x/2;
       x=x/2;
    }
    cout<<y<<endl;
 }

 OkkByee;
}