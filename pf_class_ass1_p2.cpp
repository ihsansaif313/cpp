#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "GUESS THE NUMBER FROM 1 TO 10" << endl;
    int guess;

    srand((unsigned)time(NULL));
    int random = 1 + rand() % 10;

    for (;true;)
    {
        cin >> guess;
        if (random == guess)
        {
            cout << "YOU WIN"<<endl;
            break;
        }
        else if (random > guess)
        {
            cout << "UPPER VALUE"<<endl;
        }
        else if (random < guess)
        {
            cout << "LOW VALUE PLEASE"<<endl;
        }
        else
        {
            cout << "PLEASE TRY WITH IN 1 TO 10";
        }
    }
}