#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long b[m];
	long long h=0;
	for(int j=0;j<m;j++){
		cin>>b[j];
	}
	long long k=0,f=0;
	for(int i=0;i<m;i++){
		if(a[k]>=b[i]){
			cout<<k+1<<" "<<b[i]-f<<endl;
		}
		else{
			f=+a[k];
			a[k+1]+=a[k];
			k++;
			i--;
		}
	}
}