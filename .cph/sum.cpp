#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
    int a[3];
    int s=0;
    for(int i=0;i<3;i++){
        cin>>a[i];
        s=s+a[i];
    }
    if(s==2*a[0] || s==2*a[1] || s==2*a[2]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 
 return 0;
}