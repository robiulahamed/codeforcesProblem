#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
     vector<int> v;
    for(int i=1; i<=5; i++)
    {
        v.push_back(i);
    }
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    v.resize(4);
    cout<<v.size()<<endl;
    if(v.empty()==false)
        cout<<"it is not empty\n";
    else
        cout<<"it is empty \n ";
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }


 }
