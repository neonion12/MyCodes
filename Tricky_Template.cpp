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
    long long int n;
    cin>>n;
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    long long int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==c[i] || b[i]==c[i]){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

  }  
    
  OkkByee;
}