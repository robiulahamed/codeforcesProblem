#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<string,string>,int>a,pair<pair<string,string>,int>b){
       if(a.first.second==b.first.second){
        
        if(a.first.first==b.first.first){
            if(a.second<b.second) return false;
            else return true;
        }
        else {
            if(a.first.first<b.first.first) return true;
            else return false;
        }
        
       }
       else{
        if(a.first.second<b.first.second) return true;
        else  return false;
       }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin>>t;
    vector<pair<pair<string,string>,int>>v;

    for(int i=0; i<t;  i++){
        int n;string x,y;
        cin>>x>>y>>n;
        v.push_back({{x,y},n});

    }
    sort(v.begin(),v.end(),cmp);
    for(auto i:v){
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
    }
          
    return 0;
}