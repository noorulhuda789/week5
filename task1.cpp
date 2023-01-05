#include<iostream>
#include<math.h>
using namespace std;
int positive(float a,float b,float c);
int negative(float a,float b,float c);
main()
{ 
 float a,b,c;
 cout<<"enter 1 number";
 cin>>a;
 cout<<"enter 2 number";
 cin>>b;
 cout<<"enter 3 number";
 cin>>c;
 float r=positive(a,b,c);
 cout<<" x is equal to" <<r;
 float s=  negative(a,b,c);
cout<<"\t x is equal to " <<s;
}

 int positive(float a,float b,float c)
{
 int d=pow(b,2);
 float f =d-(4*a)*c;
 float squareroot=sqrt(f);
 float e=-b+squareroot;
 float j=2*a;
 float h= e/j ;
 return h;
}
 int ngative (float a,float b,float c)
{
 int d=pow(b,2);
 float f =d-(4*a)*c;
 float squareroot=sqrt(f);
 float i=-b-squareroot;
 float k=2*a;
 float l=i/k;
 return l;
}

