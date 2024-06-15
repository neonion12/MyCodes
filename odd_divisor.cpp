#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t,n;
    cin>>t;
    int f=0;
    while(t--)
    {
        f=0;
        cin>>n;
        if(n%2!=0)
         {
             cout<<"YES"<<endl;
             f=1;
         }     
        else
        {
          for(long long int i=n/2;i>=2;i=i/2)
            {
                if(n%i==0&&i%2!=0)
                 {
                     cout<<"YES"<<endl;
                  f=1;
                 break;
                 }
            }
        }
       if(f!=1)
        cout<<"NO"<<endl;
    }    
    return 0;
}
		  	     	  		 			 					   			