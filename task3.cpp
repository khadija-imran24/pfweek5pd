#include<iostream>
using namespace std;
float taxCalculator(char type,float price);
main()
{

float price;
string vehicle;
char type;
float result;
cout<<"enter the price of vehicle";
cin>>price;
cout<<"enter the vehicle name:";
cin>>vehicle;
cout<<"enter code of vehicle:";
cin>>type;
result=taxCalculator(type, price); 
cout<<"the final price on a vehicle of type"<<type<<"adding tax is"<<result<<endl<<"with"<<vehicle<<"replaced by the vehicle type and "<<result<<"with the final price";
}
float taxCalculator(char type,float price)
{ 
    float final;
    float total;
    float taxAmount;
    if(type=='m')
    {
      taxAmount=price*0.06;
      total=taxAmount+price;
      return total;

    }
    if(type=='e')
    {
      taxAmount=price*0.08;
      total=taxAmount+price;
      return total;

    }
    if(type=='s')
    {
      taxAmount=price*0.10;
      total=taxAmount+price;
      return total;

    }
    if(type=='v')
    {
      taxAmount=price*0.12;
      total=taxAmount+price;
      return total;
    }
    if(type=='t')
    {
      taxAmount=price*0.15;
      total=taxAmount+price;
      return total;

    }
    return 0;
}