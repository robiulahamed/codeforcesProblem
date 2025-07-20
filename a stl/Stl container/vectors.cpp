#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v;\
    int n=0;
   for(int i=0; i<6; i++)
    {   int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0; i<6; i++)
    {
        if(v[i+1]!=v[i]+1)
        {
            n++;
        }
    }
    if(n>0){cout<<"the vector is not asscociative";}
    else
    cout<<"the vectoe is associative";
}  

//vector example 2

    

       
       

