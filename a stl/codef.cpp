#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> con;

        for (int i = 0; i < n; ++i) {
            int a, x;
            cin >> a >> x;
            con.push_back({a, x});
        }

        sort(con.begin(), con.end());

        int min_limit, max_limit;

        for (const auto& constraint : con) {
            int a = constraint.first;
            int x = constraint.second;

            if (a == 1) {
                min_limit = max(min_limit, x);
            } else if (a == 2) {
                max_limit = min(max_limit, x - 1);
            }
        }

        int result = max(0, max_limit - min_limit + 1);
        cout << result << endl;
    }

    return 0;
}
