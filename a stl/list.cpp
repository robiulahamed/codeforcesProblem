
// it is a container .its store data int,char,stein manu ither
#include<bits/stdc++>
using namespace std;
int main()
{
    list<int>li; // declaration
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    //list<int>li={1 ,2,3,4,5}; anothe way of input
    // print with iterator its a one way of print output
    list<int>::iterator it;
    for(int it=li.begin(); it!=li.end(); it++)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //another way of print value with iteraor eith auto functiom
    for(auto it::li)
    {
        cout<<it<<" ";

    }
    cout<<endl;
    li.push_front(4);// ekdom first e value add lora hou er maddome

    cout<<li.front()<<endl;// first value print
    cout<<li.back()<<endl; // last value print

    li.pop_front(); // first value ke nai kore dewa
    li.pop_back(); // last value delet hobe

    cout<<li.size()<<end; // vlae golar size ber lora
    // li.clear(); son value clear kore dibe

    if(li.empty())cout<<" Empty"<<endl; // list empty kina chek kore

    else cout<<"not empty"<<endl;

    // je kono value add kora
    list<int >:: iterator it;
    it=li.begin();
    advance(it,3); // positon set kora
    li.insert(it,4,5);// 3 postioon e 5 value 4 bar addd

    list<int > iterator it;
    it=li.begin();
    advance(it,3); // positin 3
    li.erase(it,2); // postion 3 theke value erase korbe

    li.remove(2); // list e joto gula 2 thaklbe els sathe son delet hoye habe 50 ata 2 thakle o son gula 2 delet hoye jabe
    li.reverse(); // value oltiye dibe
    li.sort(); // value chot theke voro kore print

    li.unique();// pasa pasi eka sthe eki rokom value rakhbe na on fuka hele 1 ta kore dibe
    // li.swap(li2); list li er value li2 te chole jabe


}
