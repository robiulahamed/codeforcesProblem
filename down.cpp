#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      stack<char>st;int c=0;
      string ans ="NO";
      for(int i=0; i<s.size(); i++){
        if((st.empty() && s[i]=='(') && c==1){
                ans = "YES";
        }
        if(s[i] == ')'){
            
            st.pop();
            if(st.empty()) c=1;
        
            
        }
        else{
            st.push(s[i]);
        }
      }
      cout<<ans<<"\n";
    }
    return 0;
}