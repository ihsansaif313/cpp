#include <iostream>
using namespace std;

const int ROW = 2;
const int COLUMN = 2;

void multiply(int a[ROW][COLUMN], int b[ROW][COLUMN], int mult[ROW][COLUMN])
{
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COLUMN; ++j)
        {
            mult[i][j] = 0;
            for (int k = 0; k < ROW; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int a[ROW][COLUMN], b[ROW][COLUMN], mult[ROW][COLUMN];

    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COLUMN; ++j)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COLUMN; ++j)
        {
            cin >> b[i][j];
        }
    }

    multiply(a, b, mult);

    cout << "Output Matrix:" << endl;
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COLUMN; ++j)
        {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
