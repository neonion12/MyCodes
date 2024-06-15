#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        int a[5];
        for(int i=0;i<5;i++){
            cin>>a[i];
        }
        sort(a,a+5);
        cout<<a[4]*a[3]<<endl;
    }          
    
}