//https://codeforces.com/problemset/problem/1915/D
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int n;cin>>n;
    string s;
    cin>>s;int j=s.size();vector<string>vs;
    int i=s.size()-1;
    while(i>=0) {
        if(s[i]!='a' && s[i]!='e'){
            j=j-3;
           vs.push_back(s.substr(j,3));
           i=j-1;
           
           
        }
        else{
            j=j-2;
            vs.push_back(s.substr(j,2));
            i=j-1;
            
        }
        


    }
    reverse(vs.begin(),vs.end());
      for(int k = 0; k < vs.size(); k++){
    cout << vs[k];
    if(k + 1 < vs.size()) cout << ".";
}
        cout<<"\n";
    }
    return 0;
}