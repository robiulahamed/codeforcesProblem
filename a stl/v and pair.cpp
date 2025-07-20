
#include<bits/stdc++.h>
using namespace std;

void printvect(vector<int> &v){
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}

int main()
{
    int n; cin>>n;
    vector<int> v[n] ;
     for(int i=0; i<n ; i++){
        int t; cin>>t;
        for(int j=0; j<t; j++){
            int x; cin>>x;
            v[i].push_back(x);
        }
     }
     for(int i=0; i<n ; i++)
     {
          printvect(v[i]);
     }



}
