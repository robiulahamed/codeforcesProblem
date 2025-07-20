#include<bits/stdc++.h>
using namespace std;
int main(){

  long long t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
      cin>>v[i];
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]==v[i+1]){
          v.erase(v.begin()+(i+1));
        }
       }
       
       
    
    for(int i=0; i<v.size()-1; i++){
      
      if( v[i]+1 >= v[i+1]){
             v.erase(v.begin()+(i+1));
       
      }
    }
    cout<<v.size()<<endl;
    for(auto j:v) cout<<j<<" ";

    cout<<endl;
    
  }
    
 
return 0;
}