#include<bits/stdc++.h>
using namespace std;
int main()
{
 int k,n,w;
 cin>>k>>n>>w;
 for(int i=1;i<=w;i++){
    n=n-i*k;
 }

 n>=0 ? cout<<"0" : cout<<abs(n);
 
 return 0;
}