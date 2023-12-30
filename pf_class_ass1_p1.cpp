#include <iostream>
using namespace std;

int main()
{
    int opr;
    int a = 0;
    int b = 0;
    cout << "1-Subtraction\n2-Addition\n3-Multiplication\n4-Division" << endl;
    cout << "Enter value" << endl;
    cin >> opr;
    cout << "Enter first value" << endl;
    cin >> a;
    cout << "Enter second value" << endl;
    cin >> b;
    switch (opr)
    {
    case 1:
    {
        int subtract = a - b;
        cout << subtract;
    }
    break;
    case 2:
    {
        int add = a + b;
        cout << add;
    }
    break;
    case 3:

    {
        int mult = a * b;
        cout << mult;
    }
    break;
    case 4:
    {
        int division = a / b;
        cout << division;
    }
    break;
    default:
        cout << "Invalid number entered";
        break;
    }
}
