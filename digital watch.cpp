#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
int main()
{
    int h=0, m=0,s=0;
    cout<<"hour"<<":"<<"minitue"<<":"<<"sec"<<"="<<endl;
    while(true)
    {
        system("cls");
        cout<<h<<":"<<m<<":"<<s<<endl;
        s++;
        if(s==60)
        {
            m++;
            s=0;
            if(m==60)
              {

               h++;
                 m=0;
                 if(h==60){
                    h=0;
                 }
                 }
        }
        usleep(100000);
    }
    return 0;
}
