#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
 string s;
 cin>>s;
 for(int i=1;i<s.size();++i){
    if(isupper(s[i])){
        c++;
    }
 }
 if(islower(s[0]) && c==s.size()-1){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();++i){
        s[i]=tolower(s[i]);
    }
    cout<<s;
 }
 else if(isupper(s[0]) && c==s.size()-1){
    for(int i=0;i<s.size();++i){
        s[i]=tolower(s[i]);
    }
    cout<<s;
 }
 else{
    cout<<s;
 }
 
 return 0;
}