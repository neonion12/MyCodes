#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int l;
    cin>>l;
    if(l==1){
        string s;
        cin>>s;
        cout<<s;
        return 0;
    }  
    string s1,s2;
    cin>>s1;
    int t1=1,t2=0;
    for(int i=1;i<l;++i){
        string s;
        cin>>s;
        if(s!=s1){
          s2=s;
          t2++;
        }
        else{
          t1++;
        }
    } 

    if(t1>t2){
      cout<<s1;
    } 
    else{
      cout<<s2;
    }    
  return 0 ; 
}