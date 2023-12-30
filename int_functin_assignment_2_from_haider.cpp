#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
    int value;
    cout << "Enter value to find factorial" << endl;
    cin >> value;
    int result = factorial(value);

    cout << result;
    return 0;
}
int factorial(int num)
{
    int factor = 1;
    for (int i = 1; i <= num; i++)
    {
        factor = factor * i;
    }
    return factor;
}