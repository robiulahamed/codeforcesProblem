#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v{3,5,9,2};
   list<int>l{v.begin(),v.end()};
   for(auto i:l)
   {
    cout<<i<<" ";
   }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l(5);
    int v=10;
    fill(l.begin(),l.end(),v);
    for(auto i:l)
    {
        cout<<i<<" ";
    }

}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>li(10);
   int v=7;
   generate(li.begin(),li.end(),[&v] {return v=v+5;});
   for(const auto t:li)
   {
    cout<<t<<" ";
   }
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void showlist (list<int>g)
{
    list<int>:: iterator it;
    for(it=g.begin(); it!=g.end(); it++)
    {cout<<*it<<" ";}
}


int main()
{
    list <int>li,li2;
    for(int i=0; i < 10; i++)
    {
        li.push_back(i*2);
        li2.push_back(i*3);
    }
    cout<<"list 1 is=";
    showlist(li);
    cout<<"\n list 2 is= ";
    showlist(li2);
    cout<<li.front();

    


}
   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
   int main()
   {
     int n;
     vector<int> v;
     cin>>n;
     for(int i=1; i<=n; i++)
     {
        int x;
        cin>>x;
        v.push_back(x);
     }
     for(auto  a:v)
     {
        cout<<a<<" ";
     }
   }
#include<iostream>
using namespace std;
int main()
{
    cout<< " amin";
}