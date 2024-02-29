#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 int c=0;
 for(int i=0;i<s.size();i++)
 {
    if(s[i]=='h'){
        c++;
        for(i=i+1;i<s.size();i++){
            if(s[i]=='e'){
                c++;
                for(i=i+1;i<s.size();i++){
                    if(s[i]=='l'){
                        c++;
                        for(i=i+1;i<s.size();i++){
                            if(s[i]=='l'){
                                c++;
                                for(i=i+1;i<s.size();i++){
                                    if(s[i]=='o'){
                                        c++;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    
 }
 if(c>=5){
    cout<<"YES";
 }
 else{
    cout<<"NO";
 }
 return 0;
}