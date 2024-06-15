#include<bits/stdc++.h>
#define Ne_is_ON int main()
#define OkkByee return 0
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
using ll = long long;
using namespace std;
Ne_is_ON
{
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=-1,r=-1;
    for(int i=0;i<s.size();i++){
        int ca=0,cb=-1;
        if(s[i]=='a' && s[i+1]=='b' || s[i]=='b' && s[i+1]=='a'){
            ca++;
            cb++;
        }
        if(ca==1 && cb==0){
            r=i+1;
            l=i+2;
            break;
        }
    }
    cout<<r<<" "<<l<<endl;
 }  
    
  OkkByee;
}