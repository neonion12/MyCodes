#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int l=0,r=n-1,z=0;
    while(l<=r){
        if(z%2==0){
            cout<<a[l]<<" ";
            l++;
        }
        else{
            cout<<a[r]<<" ";
            r--;
        }
        z++;
    }
    cout<<endl;
 }
 
 return 0;
}