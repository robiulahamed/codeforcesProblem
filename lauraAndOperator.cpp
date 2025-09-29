//https://codeforces.com/problemset/problem/1900/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    
    // vector<int>a(3);
   int a,b,c;
   cin>>a>>b>>c;
   int x=0,y=0,z=0;
   if(abs(b-c)%2==0){
    x=1;
   }
   if(abs(a-c)%2==0) y=1;
   if(abs(a-b)%2==0 ) z=1;
   cout<<x<<" "<<y<<" "<<z<<endl;




    }
    return 0;
}