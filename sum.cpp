#include<iostream>
using namespace std;
int sum(int number1,int number2);
main()
{
 int num1,num2,total;
 cout<<"enter first  number";
 cin>>num1;
 cout<<"enter 2nd number";
cin>>num2;
 total=sum(num1,num2);
 cout<<"sum is" <<total;
}
int sum(int number1,int number2)
{
 int sum=number1+number2;
  return sum;
}