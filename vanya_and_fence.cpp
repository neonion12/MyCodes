#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,h,x,w=0;
 cin>>n>>h;
 while(n--){
    cin>>x;
    x>h ? w=w+2 : w=w+1;
 }
 cout<<w;
 
 return 0;
}