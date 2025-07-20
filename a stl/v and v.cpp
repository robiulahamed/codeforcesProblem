
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
    vector< vector<int> > v;
    for(int i=0; i<n ; i++){
            int r; cin>>r;
        vector<int> temp;
        for(int j=0;  j= r;  j++)
        {
           int x; cin>>x;
           temp.push_back(x);
        }
        v.push_back(temp);
    }
     for(int i=0; i<v.size() ; i++)
     {
          printvect(v[i]);
     }



}

