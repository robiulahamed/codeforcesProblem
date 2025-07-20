// last er value age print korar poddoti
#include<bits/stdc++.h>
using namespace std;
int main();
{
    // stack is alwasys biporit in prioriy_queue
    stact<int>st;
    st.push(2);
    st.push(5);
    st.push(3);
     // empty function is similar in previour
     // size functon is simialr is previous
     cout<<st.top()<<endl; /// last value print kora

     st.pop(); // top er value delet hoye jave
     while(st.size()>0)
     {
         cout<<st.top()<<endl; // sob gula print hou
         st.pop();
     }
}
