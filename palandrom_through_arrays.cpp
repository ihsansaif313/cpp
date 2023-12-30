#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    char name[size];
    char reverse[size];
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> name[i];
    }
    for (int j = size, k = 0; j >= 0; j--, k++)
    {
        reverse[k] = name[j];
    }
    for (int m = 0; m <= size; m++)
    {
        if (reverse[m] == name[m])
        {
            cout << "  its equal";
            flag = 1;
        }
    }

    cout << endl;
    if (flag == 1)
    {
        cout << "  palandrome";
    }
    else
    {
        cout << "  not the one";
    }

    return 0;
}