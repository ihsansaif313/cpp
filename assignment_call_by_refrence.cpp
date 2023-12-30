#include <iostream>
using namespace std;
int new_balance(int &balance);
int main()
{ 
    int balance = 1000;

    int n_balance = new_balance(balance);
    cout<<"Your new balance is:  "<< n_balance<<endl;
    cout<<balance;
}
int new_balance(int &balance)
{
    int deposit;
    cout << "Enter amount to deposit" << endl;
    cin >> deposit;
    balance+= deposit;
    return balance;
}