#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   if(a>b){
    int tmp=a;
    a=b;
    b=tmp;
   }
   if(c>d){
    int tmp=c;
    c =d;
    d=tmp;
   }
   if(b<c){
    cout<<0<<endl;
   }
   else{
    int t=b-c;
    cout<<t+1<<endl;
   }
        
    
}