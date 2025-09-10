#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int fr = -1, lr = -1, fc = 1e9, lc = -1;
        char c;
        for(int i = 0; i < n; i++){
            for(int j = 0; j <k; j++){
                cin >> c;
                if(c == '#' && fr == -1) fr = i+1; // fixed here
                if(c == '#') lr = i+1;
                if(c == '#' && fc > j+1) fc = j+1;
                if(c == '#' && lc < j+1) lc = j+1;
            }
        }
        long long x = (fr + lr) / 2;
        int y = (fc + lc) / 2;
        cout << x << " " << y << "\n";
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         int fr = -1, lr = -1, fc = 1e9, lc = -1;

//         for (int i = 1; i <= n; i++) {
//             string row;
//             cin >> row;
//             for (int j = 1; j <= n; j++) {
//                 if (row[j-1] == '#') {
//                     if (fr == -1) fr = i;   // প্রথম row set করা
//                     lr = i;                 // শেষ row update
//                     fc = min(fc, j);        // min col
//                     lc = max(lc, j);        // max col
//                 }
//             }
//         }

//         long long x = (fr + lr) / 2;
//         long long y = (fc + lc) / 2;
//         cout << x << " " << y << "\n";
//     }
//     return 0;
// }
