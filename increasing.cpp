#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    int  i=1,a=n;
    vector<int>v(a);
    v[0]=x;
    v[a-1]=y;
    int f=0;
  while(y>x){
    y=y-i;
    v[a-i-1]=y;
    
    i++;

    
    if(v.size()==a && y>x) 
    f=1;
    break;

  }
  if(f){
    for(int  i=0; i<v.size(); i++)cout<<v[i]<<" ";
  }
  else{
    cout<<-1;
  }
  cout<<endl;
 }
return 0;
}