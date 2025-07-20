#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,int> mp; // declartion : key ,index
    mp.insert({1,10}); //mp[1]=10; ei babe i  paoea jabe
    mp.insert({,20});
    mp.insert({3,30});
    mp.insert({4,40});
    mp[1]=100; // smae index er valu arekbar use hole secenf value ta e print korbe
    cout<<mp.[1]<<endl;
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.secend<<endl; // value print korbe

    }
    // size() same in previuos
    // clear() is ame in previous
    //empty () is simlaaar is previous

    mp.erase(1); // 1 indx er value delet kore dibe
    // count() is similar is precious
    int cnt=mp.count(1);
    auto it=mp.find(2);
    if(it!=mp.end()) cout<<"f"<<endl;
        else cout<<"n f"<<endl;
        auto it=mp.lower_bound(1);// 1 print korbe va er theke boro ta pring korbe
        cout<<(*it).first<<" "<<(*it),second<<endl;
        //swap () is similar is previous


}
