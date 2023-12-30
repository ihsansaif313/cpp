#include <iostream>
using namespace std;

string showMessage(string message);

int main(){
    string msg = "Hello my name is haider.";
    
    string result = showMessage(msg);
    return 0;
}

string showMessage(string message){
    cout << message << endl;
    return message;
}