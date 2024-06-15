#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--){
        long long int n;
        cin>>n;
        long long int a[n],b[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
            b[i]=a[i];
        }
        if(n==1){
            cout<<a[0]<<endl;
        }
        else{
            long long int x=1,c=0;
            // sort(a,a+n);
            for(int i=0;i<n-1;++i){
                for(int j=i+1;j<n;++j){
                    if(a[i]%2==1 && a[j]%a[i]==0){
                        a[j]=a[j]%a[i];
                    }
                }
            }
            for(int i=0;i<n;++i){
                if(a[i]%2==1){
                    x=x*a[i];
                }
                else{
                    c++;
                }
            }
            for(int i=0;i<n;++i){
                if(__gcd(x,b[i])>=2){
                    continue;
                }
                else{
                  c=999096;  
                }
            }
            if(c!=0 && c==999096){
                x=x*2;
            }
            cout<<x<<endl;
        }
    }          
  return 0 ; 
}