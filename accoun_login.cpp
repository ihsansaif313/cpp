#include<iostream>
using namespace std;
 
int main()
{
int username;
int password;
cout<<"Enter your new username";
cin>>username;
cout<<"Set new password";
cin>>password;
cout<<"Now login to your account"<<endl;
int checkuser;
int checkpass;
cout<<"Enter username";
cin>>checkuser;
cout<<"Enter your password";
cin>>checkpass;
if (checkuser==username && checkpass == password)
{
    cout<<"Welcome";
}
else
{
    cout<<"invilid entry";
}

 return 0;
}
