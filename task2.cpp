#include<iostream>
using namespace std;
float pyramidVolume (float lenght,float volume , float height, string unit);
main()
{
    string unit;
    float lenght;
     
    float volume;
    float height;
    cout<<"enter length";
    cin>>lenght;
    cout<<"enter volume";
    cin>>volume;
    cout<<"enter height";
    cin>>height;
    cout<<"enter units(only in centimeters ,kilometers,millimeters):";
    cin>>unit;
    float result;
    result= pyramidVolume (lenght,volume , height,unit);
    if(unit=="centimeters")
    {
    cout <<result<<"cubic";
    }
    if (unit=="kilometers")
    {
        cout<<result<<"cubic kilometres";
    }
    if(unit=="millimeters")
    {
        cout<<result<<"cubic millimeters";
    }

}
float pyramidVolume (float lenght,float volume , float height, string unit)
{
     float total;
    if (unit=="centimeters")
    {
        total=((lenght*100)*(volume*100)*(height*100)/3);
        return total;

    }
      if (unit=="kilometers")
    {
        total=((lenght*volume*height)/1000000000)/3;
        return total;

    }
      if (unit=="millimeters")
    {
      
        total=((lenght*volume*height)*(1000000000))/3;
         
        return total;

    }

}