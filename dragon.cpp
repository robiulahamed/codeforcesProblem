
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,l,count=0;
    cin>>s>>l;
    pair<int,int> p[10000];

    for(int i=0 ; i<l; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+l);

    for(int i=0; i<l; i++)
    {
        if(s<=p[i].first)
        {
            count++;
            break;
        }
        else
        {
            s=s+p[i].second;
        }
    }
    if(count>0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

}
