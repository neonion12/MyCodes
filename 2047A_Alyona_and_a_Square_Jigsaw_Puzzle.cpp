#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int64_t a,b,c,x,y,z,count=0,n,m,tc,i,j,k;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--){
        cin>>n;
        int64_t arr[n];
        int check;
        ll cnt=0;
        double sq;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=1;i<n;i++){
            arr[i]=arr[i]+arr[i-1];
        }
        for(i=0;i<n;i++){
            check = static_cast<int>(sqrt(arr[i]));
            if(check*check==arr[i] && check%2!=0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }          
  return 0 ; 
}