// Zahin Roja
// November 8, 2017
// Homework 7- Vending Machine

#include <iostream>
using namespace std;

// Prototypes
bool value(double c);

int main()
{
   // Variables
   double totalcoins = 0;
   double coin, change;
   char answer;

   // Init
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   // Input
   do
   {
      cout << "Please insert a coin or dollar(.05= Nickel, .25 = Quarter, 1.00 = Dollar, .10 = Dime)" << endl;
      cin >> coin;

   // Processing & Output
      if(value(coin))
      {
         totalcoins = totalcoins + coin;
         cout << "Your total  is " << totalcoins << endl;
      }
   } while (totalcoins < 3.50);

   if( totalcoins >= 3.50)
   {
      cout << "Enjoy your deep fried twinkies" << endl;
   }
    change  = totalcoins - 3.50;

   if( change > 0)
   {
      cout << "Your total change is" << change << endl;
   }
   else if(change == 0)
   {
      cout << "You don't owe any change" << endl;
   }

   return 0;
}

bool value(double c)
{
   const double nickel = .05, quarter = .25, dollar = 1, dime = .1;

   if(c == dollar || c == nickel || c == dime || c == quarter)
      return true;
}

