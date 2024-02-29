//Author : n_E_on
//Written : July 15,2023 ; 8:25 pm

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int number;
    cin >> number;
    int store = number/11;
    int reminder = number%11;
    if(reminder*10<=store)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 
 return 0;
}