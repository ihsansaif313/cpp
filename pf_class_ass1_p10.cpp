#include <iostream>
using namespace std;
int main()
{
    int user;
    cout << "1-Fahrenheit -->> Celsius\n2-Celsius -->> Fahrenheit" << endl;
    cin >> user;
    switch (user)
    {
    case 1:
    {
        float to_celsius;
        cout<<"Enter value in fahrenheit"<<endl;
        cin>>to_celsius;
        float Celsius = (to_celsius - 32) * 5 / 9;
        cout << to_celsius << " Fahrenheit in Celsius is " << Celsius;
        break;
    }
    case 2:
    {
        float to_fahrenheit;
        cout<<"Enter value in Celsius "<<endl;
        cin>>to_fahrenheit;
        float fahrenheit = (9 / 5)*to_fahrenheit + 32;
        cout << to_fahrenheit << " Celsius in Fahrenheit is " << fahrenheit;
        break;
    }

    default:
        break;
    }
}
