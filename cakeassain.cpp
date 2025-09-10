//https://codeforces.com/contest/2139/problem/C
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long  l=k,r=(1ll<<(__lg(k)+1))-k;
        int cnt=0;vector<int>v;
        while(l!=r){
            if(l>r){
                r+=r; l-=r;
                v.push_back(2);
                cnt++;
                

            }
            else{
                l+=l; r-=l;
                v.push_back(1);
                cnt++;
               
            }
        }
        cout<<cnt<<endl;
        reverse(v.begin(),v.end());
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}