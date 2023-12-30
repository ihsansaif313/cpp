#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number to reverse" << endl;
    cin >> n;
    for (; true;)
    {
        int remd = n % 10;
        cout << remd;
        int rem = n / 10;
        n = rem;
        if (n == 0)
        {
            break;
        }
    }
}
