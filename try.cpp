#include <iostream>
using namespace std;
void message();
int main()
{
    message();
    return 0;
}
void message()
{
    int num;
    cout << "ENTER YOUR NUMBER" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "TRUE" << endl;
    }
    if (num % 2 != 0)
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "You entered invilid number" << endl;
    }

    return;
}