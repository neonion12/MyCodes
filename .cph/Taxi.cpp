#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[5]={};
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        a[x]++;
    }
    int t=a[4];
    t += a[3];
    a[1] = max(0, a[1] - a[3]); // Groups of size 3 can be combined with groups of size 1

    if(a[2]%2==0){
        t += a[2]/2;
    }
    else{
        t += (a[2]+1)/2; // Groups of size 2 can be combined if there are no other groups to fill up the remaining space
        a[1] = max(0, a[1] - 2);
    }

    t += (a[1]+3)/4; // Groups of size 1 can be combined to fill up remaining space

    cout<<t;

    return 0;
}
