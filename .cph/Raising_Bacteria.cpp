#include<bits/stdc++.h>
#define     Ne_is_ON     int main()
#define     OkkByee      return 0
using       ll = long long;
using       namespace std;
Ne_is_ON
{
 ll x;
 cin>>x;
 ll c=0;
 while(x!=0){
    if(x & 1) c++;
    x >>= 1;
 }
 cout<<c;

 OkkByee;
}