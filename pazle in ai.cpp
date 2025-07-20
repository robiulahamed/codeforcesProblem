#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> puzzles(m);
    for (int i = 0; i < m; ++i) {
        cin >> puzzles[i];
    }

    sort(puzzles.begin(), puzzles.end());

    int minDifference = puzzles[n - 1] - puzzles[0];

    for (int i = 1; i <= m - n; ++i) {
        int difference = puzzles[i + n - 1] - puzzles[i];
        minDifference = min(minDifference, difference);
    }

    cout << minDifference << endl;

    return 0;
}

