#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.size(); i++)
    {
       int xOr=s1[i]^s2[i];
       cout<<xOr<<endl;
    }
    return 0;


}
