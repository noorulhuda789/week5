#include<iostream>
using namespace std;
string module(int num1);

main()
{
 int num1;
 cout<<"enter number";
 cin>> num1;
 string istrue;
   istrue =module(num1);
  cout<<istrue;
  

  
}
string module(int num1)
{
 int m1=num1%10;
 int num2=num1/10;
 int m2=num2%10;
 int num3=num2/10;
 int m3=num3%10;
 int num4=num3/10;
 int m4=num4%10;
 int num5=num4/10;
 int sum=m1+m2+m3+m4+num5;
 if(sum%2==0)
  {
  return"evenish";
   
  }
  if (sum%2!=0) 
  {
   return"oddish";
  
 }
 
}
