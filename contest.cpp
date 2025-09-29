#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<int> freq(n+1, 0);
        for (int x : a) {
            if (0 <= x && x <= n) freq[x]++;
        }

        int missing = 0;
        for (int v = 0; v <= k-1; ++v) {
            if (freq[v] == 0) missing++;
        }
        int cntk = freq[k]; 
        cout << max(missing, cntk) << '\n';
    }
    return 0;
}
