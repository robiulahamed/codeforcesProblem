#include<iostream>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j;
    for(i=0; i<s.size(); i=i+2)
    {
        for(j=0; j<s.size()-1; j=j+2)
        {
          if(s[j]>s[j+2])
          {
              swap(s[j],s[j+2]);
          }
        }
    }
    cout<<s<<endl;
}
