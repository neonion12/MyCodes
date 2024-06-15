#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
    int x,d=0;
    cin>>x;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            d++;
        }
    }
    if(d==2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 
 return 0;
}