#include<iostream>
#include<cmath>
using namespace std;
float firmProject(float hours,float days,float workers);
main()
{
    float hours;
    float days;
    float workers;
    float result=0;
    float totalHour;
    cout<<"enter needed hours:";
    cin>>hours;
    cout<<"enter days firm has:";
    cin>>days;
    cout<<"enter no. of workers:";
    cin>>workers;
    totalHour=firmProject(hours,days,workers);
    if(totalHour>hours)
    {
        result=totalHour-hours;
        cout<<"yes!"<<result<<"hour left"<<endl;
    }
    if(hours>totalHour)
    {
        result=hours-totalHour;
        cout<<"not enough time!"<<result<<"hour needed";
    }

}
float firmProject(float hours,float days,float workers)
{
    float workH;
    float totalHour;
    float training;
    float workdays;
    training=days*(0.1);
    workdays=days-training;
    workH=workdays*10;
    totalHour=workH*workers;
    return totalHour;
}