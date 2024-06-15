#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    sort(a, a + m);
    int least = a[n-1]-a[0];
    for(int i=1;i<=m-n ; ++i){
        if(a[i+n-1]-a[i] < least){
            least = a[i+n-1]-a[i] ;
        }
    }
    cout<<least;
    return 0;
}