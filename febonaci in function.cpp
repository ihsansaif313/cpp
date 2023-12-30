#include <iostream>
using namespace std;
void febonaci(int num);
int main()
{
    int input;
    cout << "enter value"<<endl;
    cin >> input;
    febonaci(input);
    
}
void febonaci(int num)
{
	int f0=0;
    int f1=1;
    for (int n = 2; n <=num; n++)
    {
    int fn=f1+f0;
    cout<<"F"<<n<<"="<<fn<<","<<endl;
    f0=f1;
	f1=fn;
    }
}
