#include<iostream>
#include<math.h>
using namespace std;
main()
{
float num1,num2,compare;
 cout<<"enter first  number";
 cin>>num1;
 cout<<"enter 2nd number";
 cin>>num2;
 compare=max(num1,num2);
cout<<"greter number is " <<compare;
compare=min(num1,num2);
 cout<<"smaller number is " <<compare;
 float squareroot= sqrt(num1);
cout<<"square root is" <<squareroot;
float power =pow(num2,4);
cout<<"power is " <<power;
 float low =ceil(num1);
  cout<<" lower value is" <<low;
 float upper=floor(num2);
  cout<<"upper value is" <<upper;

} 
