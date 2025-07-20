#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
  int n;cin>>n;
  set<int>s;
  int ar[n],x,mx=0; 
  for(int i=0; i<n;i++){
    cin>>x;
    ar[i]=x;
    s.insert(x);
    mx=max(mx,ar[i]);
    

  }

  if(s.size()==1)cout<<"No"<<endl;
  else{
     cout<<"Yes"<<endl;
     for(int i=0; i<n;  i++){
      if(ar[i]==mx)cout<<2<<" ";
      else cout<<1<<" ";
     }
     cout<<endl;
  }
 
 }
return 0;
}