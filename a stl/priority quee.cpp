
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(6);
     // empty is similar is vector
     // size chek is similar is vector
     cout<<pq.top()<<endl; // boro ta print kore here big=6
     pq.pop(); // sobcheye boro value ke delet kore dei
     while(pq.size()>0)
     {
         cout<<pq.top<<endl;// a; value print korear process
         pq.pop();
     }
     // low digit theke high digit print korar jonno
     // eita use hoi== priority_queue<int,vector<int>,greater<int> >
      // empace in similar in queue
      // swap is similarin queue

}
