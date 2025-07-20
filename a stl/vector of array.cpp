#include<bits/stdc++.h>
using namespace std;
void printvect(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{ int n; cin>>n;
vector<vector<int> > v;
for(int i=0; i<n; i++){
    int t; cin>>t;
    vector<int>temp;
    for(int j=0 ;j<t; j++){
        int x ; cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);

}
 for(int i=0 ; i<v.size() ;i++)
 {
    printvect(v[i])
 }

}



#include<bits/stdc++.h>
using namespace std;
void printvect(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
