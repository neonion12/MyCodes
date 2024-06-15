#include<bits/stdc++.h>
using namespace std;
string s,z;
int n,x;
int main(){
cin>>s>>z;
for(n=s.size(),x=z.size();n>=0&x>=0&&s[--n]==z[--x];);
cout<<n+x+2;
return 0;
}