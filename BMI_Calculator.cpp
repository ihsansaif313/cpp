#include <iostream>
using namespace std;

int main()
{
    float weight;
    float height;
    cout << "BMI Calculator" << endl;
    cout << "YOUR WIEGHT (KG)" << endl;
    cin >> weight;
    cout << "YOUR HIEGHT (cm)" << endl;
    cin >> height;
    float hmeter=height/100;
    float square= hmeter*hmeter;
    float bmi=weight/square;
    cout << "BMI = "<<bmi << endl;
    if (bmi<=18.5)
    {
        cout<<"UNDER WEIGHT";
    }
    else if (bmi>18.5 && bmi<=24.9)
    {
        cout<<"NORMAL";
    }
    else if (bmi>24.9 && bmi<=29.9)
    {
        cout<<"OVER WEIGHT";
    }
    else
    {
        cout<<"OBESITY";
    }
    
}
