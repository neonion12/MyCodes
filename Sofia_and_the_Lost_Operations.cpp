#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define ld long double
#define pb push_back
#define pf push_front
#define ft first
#define sd second
#define endl '\n'
#define all(x) x.begin(),x.end()
#define allg(x) x.begin(),x.end(),greater<int>()
#define lwb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define upb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())

using namespace std;
int main()
{
	fast
	
	int tc;cin>>tc;
	while(tc--){
	   ll n;
		cin>>n;
		ll a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		
	   ll m;
        cin>>m;
        ll d[m];
        map<ll,ll> map;
        for(int i=0;i<m;i++)  {
        	   cin>>d[i];
            map[d[i]]++;
        }
        
    
     bool flag=true;
        for(int i=0;i<n;i++)
        {   if(a[i]==b[i])continue;
        	 
             else if(a[i]!=b[i]){
             	if(map.find(b[i])!=map.end() && map[b[i]]>0) {
                    map[b[i]]--;   
                }
                else{
                    flag=false;
                    break;
                }
            }
            
        }
        
       if(find(b,b+n, d[m - 1]) == b+n  ||  flag==false) {
        cout<<"NO"<<endl;
        }
        else{
        cout<<"YES"<<endl;
        }
}
	return 0;
}