#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,count1=0;
    string s;
    cin>>s;
    for(int i=1; i<s.size(); i++)
    {
        if(islower(s[i]))
        {
            count++;
        }
    }

    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            count1++;
        }
    }
    if(count1==s.size())
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
        return 0;

    }


    if(islower(s[0]) && count==0)
    {
        s[0]=toupper(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
        return 0;
    }
    else
    {
        cout<<s<<endl;
    }
    //cout<<s;
    return 0;
}
