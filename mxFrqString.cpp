#include<bits/stdc++.h>
using namespace std;
int main(){
 char c;cin>>c;
 string s;
 getline(cin,s);
 s+=c;
 map<string,int>mp;
 int mx=0;
 vector<string>v;
 string tmp;
 for(auto x:s){
    if(isspace(x)){
        v.push_back(tmp);
        tmp.clear();

    }
    tmp+=x;
 }
 v.push_back(tmp);
for(auto t:v){
    mp[t]++;
    mx = max(mx,mp[t]);
}
for(auto tt:mp){
   if(tt.second==mx)
   {
    cout<<tt.first<<endl;
    break;
   }
}


return 0;
}