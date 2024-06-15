#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int tc;
    // cin >> tc;
    // while(tc--){

    // }   

    long long int n,m;
    cin>>n>>m;
    long long int a[m];
    for(int i=0;i<m;++i){
        cin>>a[i];
    }
    long long int r=a[0]-1;
    for(int i=1;i<m;++i){
        if(a[i]<a[i-1]){
            r=r+n-(a[i-1]-a[i]);
        }
        else if(a[i]>a[i-1]){
            r=r+a[i]-a[i-1];
        }

    }
    cout<<r;

  return 0 ; 
}