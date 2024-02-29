#include<bits/stdc++.h>
#define     Ne_is_ON     int main()
#define     OkkByee      return 0
using       ll = long long;
using       namespace std;
Ne_is_ON
{
 int t;
 cin>>t;
 while(t--){
    int x,p;
    cin>>x;
    for(p=1;2*p<=x;){
        p<<=1;
    }
    cout<<p-1<<endl;
 }

 OkkByee;
}