#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  int s1=0,s2=0,s3=0;
  cin>>n;
  int a[100][100];
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
  }
  for(int k=0;k<n;k++){
    for(int l=0;l<3;l++){
        s1=s1+a[k][0];
        s2=s2+a[k][1];
        s3=s3+a[k][2];
    }
  }
  if(s1==0&&s2==0&&s3==0){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }

}