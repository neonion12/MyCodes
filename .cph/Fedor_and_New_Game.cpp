#include<bits/stdc++.h>
#define     Ne_is_ON     int main()
#define     OkkByee      return 0
using       ll = long long;
using       namespace std;
Ne_is_ON
{
 int n,m,k,f=0;
 cin >> n >> m >>k;
 int a[m+1];
 for(int i=0;i<m+1;i++){
    cin>>a[i];
 }
 for(int i=0;i<m;i++){
    int c=0;
    int r=a[i]^a[m];
    while(r!=0){
        int x=r%2;
        r=r/2;
        if(x==1){
            c++;
        }
    }
    if(c<=k){
        f++;
    }
 }
 cout<<f;
 OkkByee;
}