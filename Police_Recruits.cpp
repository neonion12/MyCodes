#include<bits/stdc++.h>
using namespace std;
int main()
{
 int p=0,c=0,t;
 cin>>t;
 while(t--){
    int x;
    cin>>x;
    if(x==-1){
        if(p==0){
            c++;
        }
        else{
            p--;
        }
    }
    else{
        p=p+x;
    }
 }
 cout<<c;
 
 return 0;
}