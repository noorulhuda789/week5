#include<iostream>
using namespace std;
int great(int number1,int number2);
main()
{
 int num1,num2,larger;
 cout<<"enter first number";
 cin>>num1;
 cout<<"enter second student";
 cin>>num2;
  larger=great(num1,num2);
cout<<"greatest number is" <<larger;
}
 int great(int number1,int number2)
{
 if(number1>number2)
 {
   return number1;
 }
 if (number2>number1)
 { 
 return number2;
 }
 
  return 0;
 }



