#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,x,y,c=0;
 cin>>n;
 while(n--)
 {
    cin>>x>>y;
    if(x<(y-1)){
        c++;
    }
 }
 cout<<c;
 
 return 0;
}