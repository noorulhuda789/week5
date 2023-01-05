#include<iostream>
#include<math.h>
using namespace std;
int module(int num1);
main()
{
 int num1;
 cout<<"enter number";
 cin>> num1;
 bool istrue;
   istrue =module(num1);
  if(istrue==true)
   {
    cout<<"symmetrical";
  }
  if(istrue==false)
  { 
   cout<<"not symmetrical";
   }
}
int module(int num1)
{
 int m1=num1%10;
 int num2=num1/10;
 int m2=num2%10;
 int num3=num2/10;
if(m1==num3)
  {
  return true;
}
if(m1!=num3)
 {
  return false;

}
return 0;
}

