#include <iostream>
using namespace std;
int main()
{
    int input;
    cout << "enter value"<<endl;
    cin >> input;
    int f0=0;
    int f1=1;
    for (int n = 2; n <=input; n++)
    {
    int fn=f1+f0;
    cout<<"F"<<n<<"="<<fn<<","<<endl;
    f0=f1;
	f1=fn;
    }
}
