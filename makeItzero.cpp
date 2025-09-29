// //https://codeforces.com/problemset/problem/1869/A
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
//     int t;
//     cin>>t;
//     while(t--){
//     int n;cin>>n;
//     vector<int>v(n);
//     for(int i=0; i<n;   i++)cin>>v[i];
//     if(n&1){
//         cout<<4<<endl;
//         cout<<1<<" "<<n<<endl;
//         cout<<1<<" "<<n-1<<endl;
//         cout<<n-1<<" "<<n<<endl;
//         cout<<n-1<<" "<<n<<endl;
//     }
//     else {
//         cout<<2<<endl;
//         cout<<1<<" "<<n<<endl;
//         cout<<1<<" "<<n<<endl;
//     }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
   
    vector<int>arr;
    for(int i=0; i<5; i++){
        int a;cin>>a;
        arr.push_back(a);
    }
    int uniqueNum = 0;
    for (int x : arr){
        uniqueNum ^= x;
        cout<<uniqueNum<<endl;

    }
    cout << "Unique element = " << uniqueNum << "\n"; // output: 3
    return 0;
}
