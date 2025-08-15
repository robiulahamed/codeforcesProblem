//https://codeforces.com/contest/2131/problem/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n;   i++){
        v[i]=-1;
    }
    int ind = n-1;
    if(n&1){
        ind--;
        while(ind>0){
            v[ind]=3;
            ind-=2;
        }
    }
    else{
        v[ind]=2;
        ind-=2;
        while(ind>0){
            v[ind]=3;
            ind-=2;
        }


    }

    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

}
    return 0;
}