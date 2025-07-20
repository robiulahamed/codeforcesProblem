// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int ar[n];
//     for(int i=0 ; i<n; i++){
//         cin>>ar[i];
//     }
// }
#include <iostream>
using namespace std;

string findd(int encoded) {
    
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < 26; ++j) {
            for (int k = 0; k < 26; ++k) {
               
            int total = i + j + k + 3; 
               
            if (total == encoded) {
                  
            return string(1, 'a' + i) + string(1, 'a' + j) + string(1, 'a' + k); }               }
            }
        
        }
    }
    return ""; 

int main() {
    int n; 
    cin >> n;
    while (n--) {
        int encoded;
        cin >> encoded;
        cout << findd(encoded) << endl;
    }
    return 0;
}
