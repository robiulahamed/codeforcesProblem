#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    set<int> t={a,b,c,d};
    cout<<4-t.size()<<endl;
    return 0;
}
