#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int t,x,ub,lb;
 vector<int> v;
 cin>>t;
 for(int i=0;i<t;++i){
    cin>>x;
    v.push_back(x);
 }
 cin>>lb;
 v.erase(v.begin()+(lb-1));
 cin>>lb>>ub;
 v.erase(v.begin()+(lb-1),v.begin()+(ub-1));
 cout<< v.size() <<endl;
 for(auto &p : v){
    cout << p << " ";
 }
 
 return 0;
}