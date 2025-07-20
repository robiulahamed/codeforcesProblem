#include<iostream>
using namespace std;
int leapyear(int year)
{
    return ((year %4==0 && year % 100!=0) || (year%400==0));

}

int main()
{
    int d1,d2,m1,m2,y1,y2,days,year;
    cout<<"Birth year: ";
    cin>>y1;
    cout<<"birth month:" ;
    cin>>m1;
    cout<<"birth day: ";
    cin>>d1;
    cout<<"current year: ";
    cin>>y2;
    cout<<"current month: ";
    cin>>m2;
    cout<<"current day:  ";
    cin>>d2;
     switch(m2)

     {

       case 1: case 3: case 5: case 7 : case 8: case 10: case 12:
            days=31;
            break;
        case 2:

        return leapyear(year) ?29: 28;
         break ;

        default :
            days=30;
        }


    int year1,month,day,i;
    year1=y2-y1;

    if(m1<=m2)
    {
    month=m2-m1;
    }
    else
    {
        year1=year1-1;
        m2=m2+12;
    month=m2-m1;
    }

    if(d1<=d2)
    {
        day=d2-d1;
    }
    else
    {
        month=month-1;

        d2=d2+days;
        day=d2-d1;
    }



  //  for(  i=y1; i<=y2 ; i++)

    //    if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
      //  {
          //  day=day+1;
        //}
        //else {
          //  day=day;
        //}



    cout<<year1<<"   YEAR   "<<month<<"   MONTH    "<<day<<"  DAYS" ;



}
//void
