#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n,s=0;
 cin>>n;
 if(n%2==0)
 {
    s=s+n/2;
 }
 else{
    s=s+(n/2)-n;
 }
 cout<<s;
 return 0;
}