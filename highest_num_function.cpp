#include <iostream>
using namespace std;

const int ROW = 2;
const int COLUMN = 2;

int highestnum(int arr[ROW][COLUMN])
{
    int highest = arr[0][0];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            if (arr[i][j] > highest)
            {
                highest = arr[i][j];
            }
        }
    }
    return highest;
}

int main()
{
    int arr[ROW][COLUMN];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << "Row " << i + 1 << " column " << j + 1 << "  ";
            cin >> arr[i][j];
        }
    }
    cout << "Original matrix" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int result = highestnum(arr);
    cout << "The highest number in the array is: " << result << endl;

    return 0;
}