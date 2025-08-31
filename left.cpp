//https://codeforces.com/problemset/problem/2125/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
     long long a,b,k;
     cin>>a>>b>>k;
     long long big,small;
     if(a>b) {
        big =a;
        small= b;
     }
     else
     {
        big =b;
        small = a;
     }
      long long gcd = __gcd(small,big);
     int f =0;
     if(big<=k && small<=k) f=1;
     else if(small/gcd<=k && big/gcd<=k){
            
           f=1;
                  
             
     }
     else{
        f=2;
     }
     

     cout<<f<<"\n";
    }
    return 0;
}