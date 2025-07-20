#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int c = 0;
        int i = 0;

        while (i <= n - k) {
            
            bool g = true;
            for (int j = i; j < i + k; j++) {
                if (v[j] == 1) {
                    g = false;
                    break;
                }
            }

            if (g) {
                c++;
                i += k + 1; 
            } else {
                i++;
            }
           
        }
        cout<<c<<'\n';

        
    }

    return 0;
}
