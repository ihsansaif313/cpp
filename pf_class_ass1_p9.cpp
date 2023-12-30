#include <iostream>
using namespace std;
int main()
{
    int choose;
    cout << "TO DO LIST APPLICATION" << endl;
    cout << "1- ADD TASKS" << endl;
    cout << "2- REMOVE TASKS" << endl;
    cin >> choose;

    switch (choose)
    {
    case 1:
    {
        int point = 0;
        cout << "Enter no of task to save" << endl;
        cin >> point;
        int *arr = new int[point];
        int save = 0;

        for (int i = 0; i < point; i++)
        {
            cin >> save;
            arr[i] = save;
        }
        cout << "available tasks\n";
        for (int j = 0; j < point; j++)
        {
            cout << arr[j] << endl;
        }

        // cout << "save data is " << *(save);
        break;
    }
    case 2:
    {
        cout << "casee 2" << endl;
        break;
    }
    default:
        cout << "default" << endl;
        break;
    }
}
