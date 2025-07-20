#include<bits/stdc++.h>
using namespace std;

void printvect(vector<pair<int,int> > & v){
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first  << "  "<< v[i].second;
    }
    cout<<endl;rdtyhgfhrtgghghggvtfbtbtbtbtbtbtb   
}

int main()
{
    vector<pair<int,int>> v;
    int n;
    for(int i=1; i<n; i++){
         int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printvect(v);

}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sz=s.size();
        if(s>10)
        {
            cout<<s[0];
            cout<<sz-2;
            cout<<s[sz-1];
            cout<<endl;

        }
        else
        cout<<s<<endl;


    }
}
