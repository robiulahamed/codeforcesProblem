//https://codeforces.com/contest/2143/problem/B
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n),vk(k);
    for(int i=0;  i<n;  i++) cin>>v[i];
    for(int i=0; i<k; i++) cin>>vk[i];
    int i=0,j=0;
    long long cst=0;
    sort(v.rbegin(),v.rend());
    sort(vk.begin(),vk.end());
    while(i<n && j<k){
        long long x=vk[j];
        while(x>1 && i<n){
            cst+=v[i];
            x--;
            i++;
        }
        if(i<n)i++;
        j++;
    }
    while(i<n){
        cst+=v[i];
        i++;
    }
    cout<<cst<<endl;
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