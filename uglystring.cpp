//https://codeforces.com/problemset/problem/1941/C
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
     string s;cin>>s;
     string s1="map",s2="pie",ss="";
     int c=0;
       for(int i=0; i<n-2;i++){
           if(s.substr(i,3)=="map" || s.substr(i,3)=="pie") c++;
           
           if(i+4<n && s.substr(i,5)=="mapie") c--;
          
          
       }
       cout<<c<<endl;
    }
    return 0;
}