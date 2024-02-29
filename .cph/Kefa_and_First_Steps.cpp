#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1,x=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++) // modified loop condition
    {
        if(a[i+1]>=a[i])
        {
            c++;
        }
        else{
            if(c>=x){
                x=c;
            }
            c=1;
        }
    }
    if(c>=x){ // check if the last sequence is the longest non-decreasing subsegment
        x=c;
    }
    cout<<x;
    return 0;
}
