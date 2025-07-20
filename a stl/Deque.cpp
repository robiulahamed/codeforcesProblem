// same of the vecto
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declaration
    deque<int>dq;
    // input system

     dq.push_back(5);
     dq.push_back(10);
     dq.push_back(20);
     dq.push_back(30);

     int a=dq.size();
     cout<<a<<endl;// size of deque
     // prnt system
      for(int i=0 ; i<dq.size();  i++)
      {
          cout<<dq[i];// at(i) ude kore w print kora jai
      }

      dq.push_front(4);// fisrt e input newa hoi

      dq.push_back(15);// last e value input kora ba

      cout<<dq.front()<<endl; // first value print kora
      cout<<dq.back()<<endl; // last digit print kora

      dq.pop_front(); // first value delet
      dq.pop_back(); // last digit delet
      //dq.clear(); // clear function er por theke son kiso faka dekhabe
       if(dq.empty())
        cout<<"enptu";
        else cout<<" not emptu";
       deque<int>::iterator it;
       it=dq.begin();
       dq.erase(it);

       deque<int>::iterator it;
       it=dq.begin()+2; // 2 number valute add kora
       dq.insert(it,5);// 2 positon w 5 add koralam








}
