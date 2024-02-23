#include <iostream>
#include<limits>
using namespace std;
typedef struct person
{
    string Name;
    int age;
    float hieght;
    float salary;
} ep;

int main()
{
    ep person[5];
    
    for (int i = 0; i < 5; i++)
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "ENTER NAME OF Person " << i + 1 << ": ";
        getline(cin,person[i].Name) ;
        cout << "Enter age of " << person[i].Name <<": ";
        cin >> person[i].age;
        cout << "Enter height of " << person[i].Name <<": ";
        cin >> person[i].hieght;
        cout << "Enter salary of " << person[i].Name << ": ";
        cin >> person[i].salary;
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        
        cout << "NAME OF Person " << i + 1 << ": "<< person[i].Name<<endl;
         
        cout << "Age: " << person[i].age<<endl;
       
        cout << "HIEGHT" << person[i].hieght<<endl ;
        
        cout << "SALERY" << person[i].salary<<endl;
        
    }
    

    return 0;
}