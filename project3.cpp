#include<iostream>
using namespace std;
int  main()
{
    int n;
    cout<<"enter result:";
    cin>>n;
    if(n>=80)
    {
        cout<<"4.00"<<endl;
    }
    else if(n>=75)
    {
        cout<<"your cgpa:"<<"3.75"<<endl;
    }
    else if(n>=70)
    {
         cout<<"your cgpa:"<<"3.50"<<endl;
    }
    else if(n>=65)
    {
         cout<<"your cgpa:"<<"3.25"<<endl;

    }
    else if(n>=60)
    {
         cout<<"your cgpa:"<<"3.00"<<endl;
    }
    else if(n>=55)
    {
         cout<<"your cgpa:"<<"2.75"<<endl;
    }
    else if(n>=50)
    {
         cout<<"your cgpa:"<<"2.50"<<endl;
    }
    else if(n>=45)
    {
         cout<<"your cgpa:"<<"2.25"<<endl;
    }
    else if(n>=40)
    {
         cout<<"your cgpa:"<<"2.00"<<endl;
    }
    else {cout<<"you  Fail"<<endl;}
    return 0;
}
