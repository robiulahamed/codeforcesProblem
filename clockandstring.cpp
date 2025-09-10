//https://codeforces.com/problemset/problem/1971/C
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     if(((a==c)|| (a==d)) || ((b==c)|| (b==d))){
        cout<<"NO"<<endl;
        continue;
     }
     int s=0;
     int f=min(a,b);
     int l = max(a,b);
     for(int i=f+1; i<l; i++){
        if(i==c || i==d) s++;
     }
     if(s==0 || s==2) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
    }
    return 0;
}