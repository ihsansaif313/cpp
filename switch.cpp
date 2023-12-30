#include<iostream>
using namespace std;
int main(){
    char opr;
    int a;
    int b;
    cout<<"what are you going to perform\n+ for sum\n- for subtraction\n* for multiplication\n/ for division"<<endl;
    cin>>opr;
    cout<<"enter your first no"<<endl;
    cin>>a;
    cout<<"enter your second no"<<endl;
    cin>>b;
    switch (opr)
    {
    case'+':
        cout<<"sum of your number is "<<a+b <<endl;
        break;
    case'-':
        cout<<"subtraction of you numbers is "<<a-b<<endl;
        break;
    case'*':
        cout<<"multiplication of your numbers is "<<a*b <<endl;
        break;
    case'/':
        cout<<"division of you numbers is "<<a/b<<endl;
        break;
    default:
         cout<<"you enter wrong opperator "<<a/b<<endl;
        break;
        return 0;
    } 
}