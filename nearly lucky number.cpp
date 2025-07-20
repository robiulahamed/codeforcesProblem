#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int count=0,sum=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            count++;
        }
        else {
            sum++;
        }
    }
    if(count==4 || count==7)
    {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}


