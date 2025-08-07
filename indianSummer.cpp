#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin>>t;
        set<pair<string,string>>s;
        for(int i=0; i<t; i++){
            string x,y;
            cin>>x>>y;
            s.insert({x,y});
        }
        cout<<s.size()<<endl;
    return 0;
}