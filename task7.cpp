#include<iostream>
using namespace std;
main()
{
  int  volume,p1,p2;
  float hour;
 cout<<"volume of pipe";
 cin>>volume;
 cout<<"flow rate of first pipe";
 cin>>p1;
 cout<<"flow rate of second pipe";
 cin>>p2;
 cout<<"enter hours";
 cin>>hour;
 float total1=hour*p1;
 float total2=hour*p2; 
 float total= total1+total2;
 if(total<=volume)
  {
    float perv=total/volume*100;
    float perp1=total1/total*100;
    float perp2=total2/total*100;
   cout<<"pool is filled" <<perv  <<"  pin which p1 and p2 contribution is" <<perp1 <<"and" <<perp2;
  }
  if(total>volume)
 {
   float diff=total-volume;
   cout<<"for" <<hour <<"  pool is overfull for" <<diff <<" liters";
 }
}
  