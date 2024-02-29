#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[125], temp;
    int xt;
    int batti=0, flag[125]= {0};
    gets(name);
 
    for (int i = 0; i < strlen(name); i++)
    {   
        
        
        flag[(int)name[i]]++;
    }
 
    for (int i = 97; i < 123; i++)
    {
        if (flag[i])
        {
            batti++;
        }
        
    }
    if (batti%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
        printf("IGNORE HIM!\n");


}