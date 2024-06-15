#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        int n,m,x[2],y[2];
        x[0]=-1;
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>a[i][j];
                if(a[i][j]=='#' && x[0]==-1){
                    x[0]=i;
                    y[0]=j;
                }
                if(a[i][j]=='#'){
                    x[1]=i;
                    y[1]=j;
                }
            }
        }
        cout<<(x[0]+x[1]+2)/2<<" "<<(y[1]+y[0]+2)/2<<endl;

    }          
  return 0 ; 
}