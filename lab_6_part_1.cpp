#include <iostream>
using namespace std;
int main()
{
    int h;
    cout << "enter heigt of paramid";
    cin >> h;
    int m=h;
    for (int k = 0; k <=h; k++)
    {

        for (int i = 0; i < m; i++)
        {
            cout << " ";
        }
        for (int j = 0; j < k; j++)
        {
            cout << "*";
        }
        cout<<"|";
        for (int j = 0; j < k; j++)
        {
            cout << "*";
        }
        cout<<endl;
        m--;
    }
}