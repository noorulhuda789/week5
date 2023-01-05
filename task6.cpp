#include<iostream>
using namespace std;
string check(char ch);
main()
{ 
 char ch;
 cout<<"entre any character";
 cin>>ch;
 string captialsmall=check(ch);
 cout<<captialsmall; 
}

string check(char ch)
   { 
     if(ch=='A')
       {
        return "you enterred captial A";
       }
     if(ch=='a')
      {
        return "you entered small  a";
      }
       return 0;
    }