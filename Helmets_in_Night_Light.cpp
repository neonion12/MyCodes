#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 1e5 + 5;

int n, m, a[N], b[N],p, tc, k;

pair<int, int> g[N];

signed main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin>>tc;
	while(tc--)
	{
		cin>>n>>p;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i],g[i]=make_pair(b[i],a[i]);
		// sum of a >= n-cnt 
		sort(g+1,g+n+1);
		if(p<=g[1].first)
		{
			cout<<n*p<<"\n";
			continue;
		}
		int ans=p;
		int j=1;
		for(int i=1;i<=n;i++)
		{
			int c=g[i].second;
			if(g[i].first>p)
			{
				ans+=(n-j)*p;
				goto E;
			}
			for(int x=1;x<=c;x++)
			{
				j++;
				if(j>n) goto E;
				ans+=g[i].first;
			}
		}
		E:;
		cout<<ans<<"\n";
	}
	return 0;
}
