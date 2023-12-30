#include <iostream>
using namespace std;

int main()
{
    int user;
    cout << "Enter height" << endl;
    cin >> user;
    int flag=user;
    for (int l = 1; l <= user; l++)
    {

        for (int i = 1; i <= flag; i++)
        {
            cout << " ";
            
        }
        flag--;
        for (int j = 1; j <= l; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}