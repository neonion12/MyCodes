#include<bits/stdc++.h>
#define int long long
using namespace std;

int t,n,a[200005];

signed main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		
		int c1=0,c2=0;
		for(int i=1;i<=n;i++)
		{
		    c1=max(c1+a[i],abs(c2-a[i]));
		    c2=c2-a[i];
		}
		cout<<c1<<endl;
	}
}