#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double Vx,Vy,Vz,result_velocity;
    cout<<"Enter velocity x axis=";
    cin>>Vx;
    cout<<"enter velocity y axis=";
    cin>>Vy;
    cout<<"ente velocity z axis=";
    cin>>Vz;
    result_velocity=sqrt(Vx*Vx+Vy*Vy+Vz*Vz);
    cout<<result_velocity<<endl;
    return 0;
}
