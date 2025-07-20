
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int > v1;
    v1.push_back(4);
    v1.push_back(74);

    v.push_back(5);//v[0]\\ value nea way
    v.push_back(6);//v[1]
    v.push_back(7);//v[2]
    v.push_back(8);//v[3]
    v.push_back(9);//v[4]
    v.push_back(10);//v[5]
    cout<<v[4]<<" "<<v[2]<<endl;//way of print
    cout<<v.at(4)<<v.at(2)<<endl;// similar coout =at
    cout<<v.size()<<endl; // way of size ber kora
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";// ek sathe sob gula print kora
    }
    cout<<endl;
    cout<<v.front()<<endl; // first value print kora
    cout<<v.back()<<endl; // last value print kora
    // cout<<v.clear()  sob value clear ba faka kore dewa
    if( v.empty ())cout<<"emptyy"<<endl; // vactor ta khali naki value ase ta chek kora
    else cout<<"not empty"<<endl;
    v.pop_back(); // last value delete kora
    cout<<endl;
    v.erase(v.begin()+0); // nidristo value delete kora
    v.erase (v.begin()+2,v.end()); // ek sathe ong gula value delt kora

    v.insert(v.begin()+2,1); // nidristo jaigai value newa
    v.insert(v.begin(),3,1) ; // nidristo jaigai koto ta value add kora hoi
    swap(v,v1); // v er value chole jave v1 e v1 er mane chole jabe v te
     sort(v.begin(),v.end()); // choto  theke boro value print hobe
     reverse(v.begin(),v.end()) ; // boro the choto value serial e print kore


      vector<int> :: iterator it;
      it=v.begin();
      cout<<*it<<endl;
      it =v.begin()+3;
      cout<<*it<<endl;
      for(it=v.begin(); it!=v.end();it++)
      {
          cout<<*it<<endl;
      }



}
