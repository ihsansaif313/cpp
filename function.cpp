#include <iostream>
using namespace std;

// function declaration
bool isOdd(int num);

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    bool result = isOdd(a); // function calling

    if (result == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}

// definition definition
bool isOdd(int num)
{
    if (num % 2 != 0)
        return true;
    else
        return false;
}

// funciton declaration
// function difinition
// function calling

// type of function

// 1: reuturn nothing and take noting
// void fun_name();
// void fun_name(int money);
// int fun_name();
// int fun_name(int money)
