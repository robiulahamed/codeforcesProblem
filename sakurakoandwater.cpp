//https://codeforces.com/problemset/problem/2033/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
      int n;cin>>n;
        int ar[n][n];
        for(int i=0; i<n;  i++){
            for(int j=0; j<n; j++){
                cin>>ar[i][j];
            }
            
        }
        long long s=0;
        for(int i=0; i<n;  i++){
            int j=0,k=i,mn = 0;
            while(j<n && k<n){
                if(ar[j][k]<0){
                    mn = min(mn,ar[j][k]);
                }
                j++; k++;
            }
            s+=abs(mn);
        }
        for(int i=1; i<n; i++){
            int j=i,k=0,mn = 0;
            while(j<n && k<n){
                if(ar[j][k]<0){
                    mn= min(mn,ar[j][k]);
                }
                j++;  k++;
            }
            s+=abs(mn);
    }
    cout<<s<<endl;
}
    return 0;
}