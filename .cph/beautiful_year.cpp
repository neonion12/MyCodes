#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x;
 string s;
 cin>>x;
 while(1){
    x=x+1;
    s=to_string(x);
    set<int> unidigits(s.begin(),s.end());
    if(s.size()==unidigits.size()){
        cout<<x;
        break;
    }
 }
 
 return 0;
}