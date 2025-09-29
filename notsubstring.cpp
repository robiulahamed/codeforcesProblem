//https://codeforces.com/problemset/problem/1860/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
     string s;cin>>s;
     if(s=="()"){
        cout<<"no\n";
     }
     else{
        cout<<"yes\n";
           if(s[0]==s[1] || s[2]==s[1]){
            
                  for(int i=0; i<s.size(); i++) cout<<"()";
            
                 }
       else  {
                for(int i=0;  i<s.size(); i++) cout<<'(';
                for(int i=0;  i<s.size();  i++) cout<<')';
            }
        cout<<"\n";
     }
     
    }
    return 0;
}