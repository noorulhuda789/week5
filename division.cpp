#include<iostream>
using namespace std;
float divide(float number1,float number2);
main()
{
 
 float num1,num2,division;
 cout<<"enter first  number";
 cin>>num1;
 cout<<"enter 2nd number";
cin>>num2;
division=divide(num1,num2);
cout<<"division is" <<division;
}
float divide(float number1,float number2)
{
float f=number1/number2;
return f;
}