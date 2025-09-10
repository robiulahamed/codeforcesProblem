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
    for(int i=0,x;  i<n;  i++){
        cin>>x;
        cout<<n-x+1<<"  ";
    }
    cout<<"\n";
    }
    return 0;
}
//https://codeforces.com/contest/2137/problem/C




// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
//     int t;
//     cin>>t;
//     while(t--){
//         int n;cin>>n;
//         vector<int>p(n);
//         for(int i=0; i<n;  i++) cin>>p[i];

//         vector<vector<int>>cnt(3);
//         for(int i=1; i<=n; i++){
//                int x=i%3;
//                cnt[x].push_back(i);
//         }
//         for(int i=0; i<3; i++){
//             reverse(cnt[i].begin(),cnt[i].end());
//         }
//         vector<int>q(n);
//         for(int i=0; i<n;  i++){
//             int a = p[i]%3;
//             int need = (3-a)%3;
//             if(cnt[need].empty()){
//                 for(int r=0; r<3; r++){
//                       if(!cnt[r].empty()){ 
//                        need = r;
//                         break;
//                 }
//             }
//         }
//          q[i] = cnt[need].back();
//             cnt[need].pop_back();



//         }
//         for(auto i: q){
//             cout<<i<<" ";
//         }
//         cout<<"\n";

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; 
//     if(!(cin >> t)) return 0;
//     while(t--) {
//         int n; cin >> n;
//         vector<int> p(n);
//         for(int i=0;i<n;i++) cin >> p[i];
//         // available numbers grouped by value % 3
//         vector<vector<int>> avail(3);
//         for(int x=1;x<=n;x++){
//             avail[x % 3].push_back(x);
//         }
//         // we'll pop back from each avail list, so reverse to get small->large if desired
//         for(int r=0;r<3;r++) reverse(avail[r].begin(), avail[r].end());
//         vector<int> q(n);
//         for(int i=0;i<n;i++){
//             int need = (3 - (p[i] % 3)) % 3;
//             // take one from avail[need]
//             if(avail[need].empty()){
//                 // theoretically shouldn't happen because p is permutation of 1..n
//                 // but keep fallback (not needed for correct input)
//                 // find any non-empty
//                 for(int r=0;r<3;r++){
//                     if(!avail[r].empty()){
//                         need = r; break;
//                     }
//                 }
//             }
//             q[i] = avail[need].back();
//             avail[need].pop_back();
//         }
//         for(int i=0;i<n;i++){
//             if(i) cout << ' ';
//             cout << q[i];
//         }
//         cout << '\n';
//     }
//     return 0;
// }



