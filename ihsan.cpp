#include<iostream>
using namespace std;
int main(){
    string user;
    string pass;
    cout<<"Create new account"<<endl;
    cout<<"Enter your user name"<<endl;
    cin>>user;
    cout<<"Enter your password"<<endl;
    cin>>pass;
    cout<<"CONGRATULATIONS YOUR ACCOUNT HAS BEEN CREATED\n\nPlease log in your account"<<endl;
    string userlog;
    string passlog;
    cout<<"Enter your user name"<<endl;
    cin>>userlog;
    cout<<"Enter your password"<<endl;
    cin>>passlog;
    if ((userlog==user) && (passlog==pass)){
       cout<<"YOU HAVE BEEN LOGED IN";
       }
    else
    cout<<"Username or password incorrect. Please try again";
    return 0;
}