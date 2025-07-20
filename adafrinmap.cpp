#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k;
 cin>>n>>k;
 map<string,long long>mp;
 string s;long long  q;
 for(long long i=0;i<n; i++){
    cin>>s;cin>>q;
    mp[s]+=q;
 }
 vector<pair<long long,string>>vp;
 for(auto i:mp){
   pair<long long,string>pr = make_pair(i.second,i.first);
   vp.push_back(pr);
 }
sort(vp.begin(),vp.end());
long long cnt=0;
while(vp.size() && k>0){
    cnt+=vp.back().first;
    vp.pop_back();
    k--;
   

}
cout<<cnt<<endl;
return 0;
}