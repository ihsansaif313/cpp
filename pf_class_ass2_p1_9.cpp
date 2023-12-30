#include <iostream>
using namespace std;

int main()
{
    int space = 5;
    int num=1;
    for (int i = 1; i <=5; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <=i; k++)
        {
            cout<<k<<" ";   
        }
       
        cout<<endl;

        space--;
    }

    return 0;
}