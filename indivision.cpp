//https://codeforces.com/contest/2136/problem/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
     long long a,b,c,d;
     cin>>a>>b>>c>>d;
     long long ac = abs(c-a);
     long long bd = abs(d-b);
   //   a =min(a,b);
   //   b=max(a,b);
   //   ac = min(ac,bd);
   //   bd = max(ac,bd);
   //   int f = abs(a*2-b);
   //   int  f2 = abs(ac*2-bd);
     if(b<=a*2+2 || bd<=ac*2+2){
      cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;
     
    }
    return 0;
}