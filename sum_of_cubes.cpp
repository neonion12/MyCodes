#include<bits/stdc++.h>
#define     E      int main()
#define     okkByee            return 0
using namespace std;
const long long N = 1'000'000'000'000L;

unordered_set<long long> cubes;

void precalculation(){
    for(long long i=1;i*i*i<=N;i++){
        cubes.insert(i*i*i);
    }
}

void solve(){
    long long x;
    cin>>x;
    for(long long i=1;i*i*i<=x;i++){
        if(cubes.count(x-i*i*i)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}



E
{
   precalculation();
   int t;
   cin>>t;
   while(t--){
    solve();
   }

   okkByee;
}