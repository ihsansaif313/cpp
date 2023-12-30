#include <iostream>
using namespace std;

void deposite(int &nbalance);

int main()
{
    int balance = 1500;
    deposite(balance);

    cout << "Old memory: " << &balance << endl;
    cout << "Old balance: " << balance << endl;
    return 0;
}

void deposite(int &nbalance)
{
    int amount;
    cout << "Enter amount to deposite: ";
    cin >> amount;

    nbalance += amount;
    cout<< "New balance: " << nbalance << endl;
    cout << "New memory: " << &nbalance << endl;
}

 