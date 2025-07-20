#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> tools(n);
        for (int i = 0; i < n; ++i) {
            cin >> tools[i];
        }

        // Sort the tools in descending order to use the ones with maximum increase first
        sort(tools.rbegin(), tools.rend());

        int maxTime = 0;

        // Try using each tool and find the maximum time until explosion
        for (int i = 0; i < n; ++i) {
            // Calculate the time after using the i-th tool
            int currentTime = (b + tools[i] - 1) / tools[i] * tools[i];

            // Calculate the remaining time after using the i-th tool
            int remainingTime = max(0, a - currentTime);

            // Update the maximum time until explosion
            maxTime = max(maxTime, currentTime + remainingTime - b);
        }

        cout << maxTime << endl;
    }

    return 0;
}
