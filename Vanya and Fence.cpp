#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool Vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i<t; i++) {
        int n;
        cin >>n;

        string S;
        cin >> S;

        string rslt = "";

        for (int i = 0; i < n; i++) {
            if (Vowel(S[i])) {
                reverse(rslt.begin(), rslt.end());
            }
            rslt += S[i];
        }

        cout << rslt << endl;
    }

    return 0;
}
