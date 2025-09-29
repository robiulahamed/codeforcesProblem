#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<long long>a(n),b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int j=0; j<n; j++) cin>>b[j];
    long long sa=0,sb=0;
    for(int i=0;  i<n; i++){
        sa+=a[i];
        sb+=b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sa+=(b[0]*n);
    sb+=(a[0]*n);
    long  long sum =min(sa,sb);
    cout<<sum<<"\n";
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