#include <iostream>
using namespace std;

int main()
{
    int arr[5][2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "| ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " is on index " << i << " , " << j << endl;
        }
    }
    cout << "\n In matrix form" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    int even = 0, odd = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                even +=1;
            }
            else
                odd += 1;
        }
        cout << endl;
    }
    cout<<"Number of odds is : "<<odd<<"  and even is :"<<even;

    return 0;
}