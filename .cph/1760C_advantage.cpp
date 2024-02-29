#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;

    while(n--){
        int m;
        cin>>m;
        int arr[m];
         for( i=0; i<m;i++){
            cin>>arr[i];
        }
         
     int max=arr[0];
      for( i=1;i<m;i++){
            if(arr[i]>max) max=arr[i];}


         for( i=0; i<m-1;i++){
            
                cout<<arr[i]-max;
                }

         cout<<arr[m-1]-arr[m-2]<<endl;


         }


    return 0;
}