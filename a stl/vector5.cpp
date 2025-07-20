#include<bits/stdc++.h>
using namespace std;

void fun(vector<int>&v)
{
     v.push_back(30);
for(int i=0; i<v.size(); i++)
   {
    cout<<v[i]<<" ";
   }

   }


int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    fun(v);
   
}
#include <bits/stdc++.h>
main()
{
    int n,m;
std::cin>>n>>m;
puts(std::min(n,m)%2?"Akshat":"Malvika");

}


#include<bits/stdc++.h>
using namespace std ;
void fun(list<vector<int>> &lv)
{
    for(auto ta:lv)
    {
        vector<int>pa=ta;
        for(auto i:pa)
        {
            cout<<i<<" ";
        }
        cout<<"\n";

    }
}
int main()
{
    list<vector<int>>lv;
    vector<int>v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    lv.push_back(v1);


    vector<int>v2;
    
    v2.push_back(11);
    v2.push_back(21);
    v2.push_back(31);
    lv.push_back(v2);


    vector<int>v3;
    
    v2.push_back(31);
    v2.push_back(41);
    v2.push_back(51);
    
    lv.push_front(v3);
    fun(lv);
}


