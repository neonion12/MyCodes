#include<bits/stdc++.h>
#define     Ne_is_ON     int main()
#define     OkkByee      return 0
using       ll = long long;
using       namespace std;
Ne_is_ON
{
 ll n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){        //cpu exceed in testcase 3
    cin>>a[i];
  }
  sort(a,a+n);
  while(k!=0){
    a[0]++;
    k--;
    sort(a,a+n);
  }
  cout<<a[0];

 OkkByee;
}