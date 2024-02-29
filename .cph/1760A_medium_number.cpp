#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i;
    cin>>n;

    while(n--){
        int arr[3];
        for( i=0; i<3;i++){
            cin>>arr[i];
        }
        int max=arr[0];
        int min=arr[0];

        for( i=1;i<3;i++){
            if(arr[i]>max) max=arr[i];
            else if(arr[i]<min) min=arr[i];
        }

        for( i=0; i<3;i++){
            if(arr[i]!=max && arr[i]!=min){
                cout<<arr[i]<<endl;
            }
        }

        


    }

    return 0;
}
