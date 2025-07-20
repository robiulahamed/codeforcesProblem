
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v{{1,2,3},{2},{9,9,3,1,0}};

    for(vector<int> t:v)
    {
        for(int x:t)
        {
            cout<<x<<" ";
        }
        cout<<" \n" ;
    }

}
