#include <iostream>
using namespace std;

string menue(int  value);

int main()
{
    int choice;
    cout << "ENTER YOUR choice" << endl;
    cout << "1-BREAKFAST" << endl; 
    cout << "2=LUNCH" << endl;
    cout << "3=DINNER" << endl;
    cin >> choice;
    string menuee = menue(choice);
    cout << menuee ;

    return 0;
}
string menue(int value)
{
    if (value == 1)
    {
    return "BREAKFAST\nCHAI\nAANDA\nHALWA PURI" ;
       
    }
    else if (value == 2)
    {
        return "LUNCH\n\nCHICKEN KAARAHI\nKABLI PULAW";
    }
    else if (value == 3)
    {
        return "DINNER\n\nCHICKEN TIKKA\nBIRYANI";
    }
    else 
    {
        return "YOU ENTERED WRONG NUMBER";
    }
}
