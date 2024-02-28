#include <iostream>
using namespace std;

int main(){
    unsigned long long num;
    cout<<"enter value"<<endl;
    cin>>num;
    unsigned long long factorial=1;
    for (int i = 1; i <= num; i++)
    {
        factorial=factorial*i;
        
    }
    cout<<factorial;
    return 0;
}