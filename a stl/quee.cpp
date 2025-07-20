#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declaritaon
    queue<int>q;
    // inpupt syustem
    q.push(1);
    q.push(2);
    q.push(3);
    int s=q.size();
    cout<<s<<endl;
     if(q.empty()) cout<<"enpty"<<endl;
     else cout<<"mot empty"<<endl;

     cout<<q.front()<<endl; // first value print
     cout<<q.back()<<endl; // last value pritn

     q.pop();// firs value delet firast in first out
     while(q.size()>0)
     {
         cout<<q.front()<<" ";
         q.pop();
     }


}
