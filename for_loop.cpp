#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter value"<<endl;
    cin>>num;
    int factorial=1;
    for (int i = 1; i <= num; i++)
    {
        factorial=factorial*i;
        
    }
    cout<<factorial;
    return 0;
}