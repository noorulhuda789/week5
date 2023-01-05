#include<iostream>
using namespace std;
main()
{
  int min,hour;
 cout<<"enter hours";
  cin>>hour;
  cout<<"enter minuts";
  cin>>min;
  int total=min+15;
  if(total>60)
    {
     int houR=hour+1;
     if(houR>23)
       {
         houR=0;
        }
     int minu=total-60 ;
     cout<<houR <<":" <<minu;
   }
  if(total<60)
   {
     cout<<hour <<":"  <<total;
   }
}