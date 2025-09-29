#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    int g= __gcd(a,__gcd(b,c));
    a/=g; b/=g; c/=g;
    if(a+b+c-3<=3) cout<<"yes\n";
    else cout<<"no\n";

    }
    return 0;
}