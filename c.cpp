#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int a= 5005;
vector<int> adj[a];
int dp[a][a];
int ans = 0;

void dfs(int u, int p) {
    dp[u][1] = 1;
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        for (int i = 1; i <= ans + 1; ++i) {
            dp[u][i] += dp[v][i - 1];
        }
    }
}

int main() {
    int n;
    cin >> n;

    for (int j= 2; j<= n; j++) {
        int p;
        cin >> p;
        adj[p].push_back(j);
    }

    for (int k= 1; k<=n; k++) {
        dfs(1, 0);
        ans = max(ans, dp[1][k]);
    }

    cout << ans << endl;

    return 0;
}
