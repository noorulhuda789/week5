#include<iostream>
#include<math.h>
using namespace std;
float height(float x,float degree);
main()
{
 float degree;
cout<<"enter angle";
cin>>degree;
 int x;
 cout<<"enter base";
 cin>>x;
float value=height(x,degree);
cout <<" height is " <<value;
}
float height(float x,float degree)
{
float radian ,angle,y;
  radian=degree/57.2958;
  angle=tan(radian);
  y=x*angle;
 return y;
}
   