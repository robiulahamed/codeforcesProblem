#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  
    int n=0,t,i,c,j,r;
    cin>>r>>c;
    char ara[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>ara[i][j];
            if(ara[i][j]=='C' || ara[i][j]=='M' || ara[i][j]=='W'|| ara[i][j]=="Y")
            {
                n++;
 
            }
        }
    }
    if(n>0)cout<<"#Color";
    else cout<<"#Black&White";
}