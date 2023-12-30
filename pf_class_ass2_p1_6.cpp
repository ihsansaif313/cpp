#include <iostream>
using namespace std;

int main()
{

    int hieght = 10;
    int space = hieght;
    for (int i = 0; i < hieght / 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < space - 2; k++)
        {
            cout << " ";
        }
        space--;
        space--;
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }

        cout << endl;
    }
    space = 0;
    int lheight=hieght/2;
    for (int z = 0; z < hieght/2; z++)
    {

        for (int i = 0; i < lheight; i++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        space++;
        space++;
        for (int k = 0; k < lheight; k++)
        {
            cout << "*";
        }
        lheight--;
        cout<<endl;
    }

    return 0;
}