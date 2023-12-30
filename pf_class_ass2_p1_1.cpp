#include<iostream>
using namespace std;
 
int main()
{
   int user;
   cout<<"Enter length"<<endl;
   cin>>user;
 for (int i = 0; i < user; i++)
 {
    cout<<"*";
 }
 for (int i = 0; i < 3; i++)
 {
   cout<<"\n*";
   for (int i = 0; i < user-2; i++)
   {
      cout<<" ";
   }
   cout<<"*";
   
 }
 cout<<"\n";
 for (int i = 0; i < user; i++)
 {
    cout<<"*";
 }
 
 
 return 0;
}