#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        string a,b;
        char c;
        cin>>a;
        cin>>b;
        c=a[0];
        a[0]=b[0];
        b[0]=c;
        cout<<a<<" "<<b<<endl;
    }          
  return 0 ; 
}