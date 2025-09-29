//https://codeforces.com/problemset/problem/1855/B
#include<bits/stdc++.h>
using namespace std;

void  solve(){
    long  long n;cin>>n;
//     set<int>st;
//     vector<int>v;
//     if(n==1 || n==2 || n==3){
//         cout<<1<<"\n";
//         return;
//     }

//     for(int i=1; i<=n/2; i++){
//         if(n%i==0){
//             st.insert(i);
//             st.insert(n/i);
//         }
//     }
    
//   for(auto i:st){
//     v.push_back(i);
//   }
//   sort(v.begin(),v.end());
//   int l=1,mx=1;
//   for(int i=0; i<v.size()-1; i++){
//       if(v[i+1]-v[i]==1){
//         l++;
//       }
//       else{
//         if(mx<l) mx=l;
//         l=1;
//       }
//   }
  
//   cout<<mx<<"\n";



int  c=0;
for(int i=1; i<=n; i++){
    if(n%i==0) c++;
    else break;
}
cout<<c<<endl;

  
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