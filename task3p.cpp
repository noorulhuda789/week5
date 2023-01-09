#include<iostream>
using namespace std;
float taxcalculator(char type,float  price);
main()
{ 
 float price;
 char type;
 cout<<"enter price";
 cin>>price;
 cout<<"enter type of  vechile";
 cin>>type;
float total= taxcalculator(type,price);
float sum =price+total;
cout<<"the final price of model" <<type <<"after adding tax is" <<sum;
}
float taxcalculator(char type,float price)
{
    if(type=='m')
    {
        float tax1=price*6/100;
        return tax1;

    }
    if(type=='e')
    {
        float tax2=price*8/100;
        return tax2;
    }
    if (type=='s')
     {
        float tax3=price*10/100;
        return tax3;
     }
     if(type=='v')
     {
        float tax4=price*12/100;
        return tax4;
     }
     if (type=='t')
     {
        float tax5=price*15/100;
        return tax5;
     }
     return 0;
}
