#include<bits/stdc++.h>
using namespace std;
int main(){
 int t,k;
 cin>>t>>k;
vector<string>s;
for(int i=0; i<t; i++){
    string ss ;
    cin>>ss;
    if(k>0){
        s.push_back(ss);
        k--;
    }
    
}
sort(s.begin(),s.end());
for(auto i:s)
cout<<i<<endl;
return 0;
}