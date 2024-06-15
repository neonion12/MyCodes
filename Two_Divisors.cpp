#include<bits/stdc++.h>
#define Ne_is_ON int main()
#define OkkByee return 0
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
using ll = long long;
using namespace std;
Ne_is_ON
{
   ios::sync_with_stdio(false);
   cin.tie(0);
    
int tt;
cin>>tt;
while(tt--){
    ll a,b;
    cin>>a>>b;
    if(b%a==0){
        cout<< b*(b/a);
    }
    else{
        cout<<(a*b)/__gcd(a,b);
    }
    cout<<endl;
}
  OkkByee;
}