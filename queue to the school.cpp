#include<iostream>
using namespace std;
int main()
{    int year1,year2,month1,month2,day1,day2,total_year,total_month,total_days;
    cout<<"ente birth year:";
    cin>>year1;
    cout<<"enter birth month:";
    cin>>month1;
    cout<<"enter birth days:";
    cin>>day1;

    cout<<"enter present year:";
    cin>>year2;
    cout<<"entr present montch:";
    cin>>month2;
    cout<<"enter present days:";
    cin>>day2;
    total_year=year2-year1;
    total_month=month2-month1;
    total_days=day2-day1;
    cout<<total_year<<total_month<<total_days;    if( int i=year1; i<=year2 ; i++)
    {
        if((i%4==0 && i%100!=0) || i%400==0)
            totat_days++;
    }

    switch(total_month)
    {
    case 4: case:6 case 9: case 11:
        days=30;
        break;
    case 2:
        days=29;
        default
        days=31;
    }


   return 0;
}
