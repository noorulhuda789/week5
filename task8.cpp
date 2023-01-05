#include<iostream>
using namespace std;
void two(int num3);
void number(int num2);
 main()
{
 int num1;
 cout<<"enter any 2 digit number";
 cin>>num1;   
 int num2=num1%10;
 int num3=num1-num2;
 two(num3);
 number(num2);
}
 void two(int num3)
 {
   if(num3==10)
   { 
     cout<<"ten";
   }
  if(num3==20)
  {
   cout<<"twenty";
  } 
 if(num3==30)
  {
   cout<<"thirty";
  }
 if(num3==40)
  {
   cout<<"fourty";
  }
 if(num3==50)
  {
   cout<<"fifty";
  }
  if(num3==60)
  {
   cout<<"sixty";
  }
 if(num3==70)
  {
   cout<<"seventy";
  }
 if(num3==80)
  {
   cout<<"eighty";
  }
if(num3==90)
  {
   cout<<"ninty";
 }
 }
 void number(int num2)
{
 if(num2==1)
 {
   cout<<"one";
 }
 if(num2==2)
 {
   cout<<"two";
 }
 if(num2==3)
 {
   cout<<"three";
 }
 if(num2==4)
 {
   cout<<"four";
 }
 if(num2==5)
 {
   cout<<"five";
 }
 if(num2==6)
 {
   cout<<"six";
 }
 if(num2==7)
 {
   cout<<"seven";
 }
 if(num2==8)
 {
   cout<<"eight";
 }
 if(num2==9)
 {
   cout<<"nine";
}
}
 

   