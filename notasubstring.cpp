//https://codeforces.com/problemset/problem/1860/A
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    stack<char>st;
    int f=0;
    for(char i:s){
    if(!st.empty() && i==')'){
        st.pop();
    }
    else{
        st.push(i);
    }
    }
    if(!st.empty()){
        cout<<"yes\n";
        for(int i=0; i<s.size(); i++) cout<<'(';
        for(int i=0; i<s.size(); i++) cout<<')';
        cout<<"\n";
    }
    else cout<<"no\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}