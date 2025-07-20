#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double height,atmospheric_pressure,descent_time,descent_rate;
    cout<<" enter height(meter) and pressure(pascel):";
    cin>>height>>atmospheric_pressure;

    descent_time=sqrt(-2*height/9.81);
    descent_rate=-height/descent_time;
    const double descent_rate_thresold=-10.0;

    if(descent_rate<= descent_rate_thresold)
    {
        cout<<"parachut Deploy";
    }
    else{
        cout<<"parachut continue descent";
    }
    return 0;
}
