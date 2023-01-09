#include<iostream>
using namespace std;
main()
{
 int require,days,worker;
 cout<<"enter neede hour";
 cin>>require;
  cout<<"enter days";
 cin>>days;
 cout<<"enter workers";
 cin>>worker;
 float  reqie=days-(days*0.1);


 int total=reqie*10*worker;
 int diff=total-require;
 if(diff>require)
{
 cout<<"good" <<diff <<"are left";
}
if(diff<require)
{
 cout<<"not enough time" <<diff <<"require";
}
}
