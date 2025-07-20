#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1; i<=5; i++)
    {
        v.push_back(i*10);
    }
    cout<<v.[3]<<endl;
    cout<<v.at(3)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    int *pos=v.data();
    cout<<*pos;

}
