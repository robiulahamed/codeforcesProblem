
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string course_1201,course_1101;
    int codeforce_problem;

    cout<<"Have you complate 'CSE-1201'(yes/no): ";
    cin>>course_1201;

    cout<<"Have you complated 'CSE-1101'(yes/n):";
    cin>>course_1101;

    cout<<"enter porblen solve in codeforce: ";
    cin>>codeforce_problem;
    if( course_1101=="yes" && course_1201=="yes" || codeforce_problem>=80 )
    {
        cout<<"Eligible and congratulations";
    }
    else{
        cout<<"not eligible";
    }

}
