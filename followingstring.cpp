//https://codeforces.com/problemset/problem/1927/B
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
     vector<int>a(n);
     
     string s=""; 
     for(char c='a'; c<='z'; c++){
        s+=c;
     }
     
     map<char,int>mp;
     for(int  i=0; i<s.size(); i++) mp[s[i]]=0;
     for(int i=0; i<n;  i++){
            cin>>a[i];
            for(auto it:mp){
                if(it.second==a[i]){


                    cout<<it.first;
                    mp[it.first]++;
                    break;
                }
            }
     }
     
     cout<<endl;
     

    }
    return 0;
}




