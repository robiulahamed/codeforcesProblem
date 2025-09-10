//https://codeforces.com/problemset/problem/1992/C
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>v;
        int big =n,small = 1;
        for(int i=0; i<n; i++){
            if(big>m){
                v.push_back(big);
                big--;
            }
            else{
                v.push_back(small);
                small++;
            }
        }
        for(auto i: v){
            cout<<i<<" ";
        }
        cout<<"\n";

    }
    return 0;
}