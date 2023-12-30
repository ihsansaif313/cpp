#include <iostream>
using namespace std;

int main()
{
    int space = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        cout << "*****";
        cout << endl;
        space--;
    }

    return 0;
}