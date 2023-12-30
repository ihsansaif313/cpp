#include <iostream>
using namespace std;
int main()
{
   char opr;
   double a, b;
   while (true)
   {
      cout << "Enter your operation \n+ for sum\n- for subtraction\n* for multiplication\n/ for division\n\nenter q if you want to quit" << endl;
      cin >> opr;
      if (opr == 'q' || opr == 'Q')
      {
         cout << "Calculater is quiting\nThankyou for using" << endl;
         break;
      }
      if (opr != '+' && opr != '-' && opr != '*' && opr != '/')

      {
         cout << "You entered wrong value\nTRY AGAIN" << endl;
         continue;
      }

      cout << "enter your number" << endl;
      cin >> a;
      cout << "enter your 2nd number" << endl;
      cin >> b;

      switch (opr)
      {
      case '+':
         cout << " Sum of " << a << " and " << b << " is " << a + b << endl;
         break;
      case '-':
         cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
         break;
      case '*':
         cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
         break;
      case '/':
         cout << "Division of " << a << " and " << b << " is " << a / b << endl;
         break;
      default:
         cout << "error happens please try again " << endl;
         break;
      }
   }
   return 0;
}