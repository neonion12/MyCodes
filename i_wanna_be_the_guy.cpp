#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,b,count=0;
   cin>>n;
   cin>>a;
   int c[100];
   for(int i=0;i<a;i++){
    cin>>c[i];
   }
   cin>>b;
   for(int j=a;j<a+b;j++){
    cin>>c[j];
   }
   int x = sizeof(c) / sizeof(c[0]);
   sort(c, c + x);
   for(int k=0;k<a+b;k++){
    if(c[k]!=c[k+1]){
        count++;
    }
   }
   if(count==n){
     cout<<"I become the guy.";
   
   }
   else{
    cout<<"Oh, my keyboard!";
   }
  



    return 0;
}