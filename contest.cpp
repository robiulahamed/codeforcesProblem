// // 



// #include <bits/stdc++.h>
// using namespace std;


// int digits(long long y) {
//     if (y == 0) return 1;
//     int d = 0;
//     while (y > 0) {
//         y /= 10;
//         d++;
//     }
//     return d;
// }


// bool check(long long x, long long y) {
//     long long c = x + y;
//     int d = digits(y);
//     long long p = 1;
//     for (int i = 0; i < d; i++) {
//         p = (p * 10) % c;
//     }
//     long long mod = ( (x % c) * p % c + (y % c) ) % c;
//     return mod == 0;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         long long ans = 1;
//         while (!check(n, ans)) {
//             ans++;
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }


