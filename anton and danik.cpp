
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count=0,count2=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.size(); i++)
    {
        if(s[i]=='A')
        {
            count++;
        }
        else if(s[i]=='D')
        {
            count2++;
        }
    }
    if(count>count2)
    {
        cout<<"Anton"<<endl;
    }
    else if(count2>count)
    {
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;

}
