#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 for(int i=1; i<=t;  i++){
  int n,m;
  cin>>n>>m;
  map<pair<int,int>,bool>mp;
  string ans="possible";
   for(int i=0; i<m; i++){
    int id,code;
    cin>>id>>code;
    if(mp[{id,code}]){
        ans="impossible";

    }
    mp[{id,code}]=true;
   }
   cout<<"Scenario #"<<i<<": "<<ans<<endl;

 }
return 0;
}