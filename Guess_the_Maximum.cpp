#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        vector<int> v;
        for(int i=0;i<n-1;++i){
            v.push_back(max(a[i],a[i+1]));

        }
        sort(v.begin(),v.end());
        cout<<v[0]-1<<endl;
    }          
  return 0 ; 
}