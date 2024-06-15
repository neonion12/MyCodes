#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, e = 0, o = 0;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        a[i] = n;
        if (a[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e==1){
        for(int i=0;i<t;i++){
            if(a[i]%2==0){
                cout<<i+1;
                return 0;
            }
        }
    }
    if(o==1){
        for(int i=0;i<t;i++){
            if(a[i]%2==1){
                cout<<i+1;
                return 0;
            }
        }
    }
}