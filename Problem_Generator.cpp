#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        int n,m,res=0,kib;
        cin>>n>>m;
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
        string s;
        cin>>s;
        for(int i=0;i<n;++i){
            if(s[i]=='A'){
                a++;
            }
            else if(s[i]=='B'){
                b++;
            }
            else if(s[i]=='C'){
                c++;
            }
            else if(s[i]=='D'){
                d++;
            }
            else if(s[i]=='E'){
                e++;
            }
            else if(s[i]=='F'){
                f++;
            }
            else if(s[i]=='G'){
                g++;
            }
        }
        if(a>=m && b>=m && c>=m && d>=m && e>=m && f>=m && g>=m){
            cout<<0<<endl;
            goto kib;
        }
        else{
            if(a<m){
                res=res+m-a;
            }
            if(b<m){
                res=res+m-b;
            }
            if(c<m){
                res=res+m-c;
            }
            if(d<m){
                res=res+m-d;
            }
            if(e<m){
                res=res+m-e;
            }
            if(f<m){
                res=res+m-f;
            }
            if(g<m){
                res=res+m-g;
            }
            
        }
        cout<<res<<endl;
        kib:{}

    }          
  return 0 ; 
}