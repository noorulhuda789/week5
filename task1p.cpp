#include<iostream>
using namespace std;
int value1=10;
int value2=20;
int sum()
{ 
int value1=40;
return value1+value2;
}
main()
{
int x=value1;
value2=sum();
x=20;
value1=100;
cout<<value1 <<" " <<value2;
}
