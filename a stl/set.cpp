#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s; // declare
    s.insert(5); //print .dublicate value print kore na.same jatio onk valu input nile o jusst elta valu print lore ..son gula unique hoi
    s.insert(2);
    s.insert(28);
    s.insert(2);
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" "; /// chto theke boro print hoi altime
    }
    cout<<endl;  // boro theke choto print korte hole =set<int,greater<int> >s;
    s.size(); // size
     for(auto it:s) cout<<it<<" ";// it er modde s er value print hoi

    // em[ty is similar in previous
    // cler() is similaar in previous
    // erase () is similar in previous
    set<int>:: iterator it;
    it=s.find(2);
    if(it!=s.end()) cout<<"find"<<endl;
    else cout<<"not find"<<endl;
    int c=s.count(2); // 2 ase naki nai seita ber kora hioii
     // lower vound ber kora
     set<int>:: iterator it;
     it=s.lower_bound(2);
     // swap is similar in prevois




}
