#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c,x,y,z,e;
 cin>>a>>b>>c;
 e=a+b+c;
 x=a*b*c;
 y=(a+b)*c;
 z=a*(b+c);
 if(x>=y && x>=z && x>=e){
    cout<<x;
 }
 else if(y>=x && y>=z && y>=e){
    cout<<y;
 }
 else if(z>=x && z>=y && z>=e){
    cout<<z;
 }
 else{
    cout<<e;
 }
 
 return 0;
}

/*a=int(input())
b=int(input())
c=int(input())
 
k=0
 
arr =[a+b*c,a*(b+c),a*b*c,(a+b)*c,a+b+c]
 
print(max(arr))*/

/*#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int res = max({a+b+c, (a+b)*c, a+b*c, a*(b+c), a*b*c});
    cout<<res;
    return 0;
}*/