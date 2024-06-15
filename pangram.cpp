#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    char ch[n];
    fgetc(stdin);
    scanf("%s", ch);
    int alp[125] = {0};

    for (int i = 0; i < strlen(ch); i++)
    {
        
        if (ch[i]>='A'&&ch[i]<='Z')
        {
            ch[i]= ch[i]+32;
        }
        alp[(int)(ch[i])]++;

    }
    int flag =1;
    
     for (int i = 97; i <=122; i++)
    {   
        if(alp[i]==0)
         flag = 0;
          
    }

  
    
    if(flag== 0)
        printf("NO\n");
    else
       printf("YES\n");


    return 0;
}       