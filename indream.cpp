#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
     
    while(t--){
        
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ac=c-a;
    int bd = d-b;
    if(max(a,b)<=min(a,b)*2+2 && max(ac,bd)<<min(ac,bd)*2+2 )
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
    return 0;
}











#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int c = 0;
        vector<int> ar(n);
        string s;   // ✅ string ব্যবহার করলাম
        cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                c++;
                ar[i] = i + 1;
            }
        }
        if (c > k) {
            cout << "NO\n";
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ar[i] = c + 1;
                c++;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << ar[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

