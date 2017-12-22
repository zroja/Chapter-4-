// Zahin Roja
// Obtober 16th, 2017
// Homework 6: Ridder Problem

#include <iostream>
using namespace std;

bool numberIsOdd(int num)
{
   if ((num % 2) == 1)
      return true;
   else
      return false;
}

bool sumis27(int num)
{
   int ones, tens, hund, thou;

   ones =  num % 10;
   tens =  (num / 10) %10;
   hund =  (num / 100) %10;
   thou =  (num / 1000) %10;

   if ((ones + tens + hund + thou) == 27)
      return true;
   else
      return false;
}

bool fourdigitsdifferent (int num)
{
   int ones, tens, hund, thou;

   if (ones != tens && tens != hund && hund != thou && ones != thou && ones != hund && thou != tens)
      return true;
   else
      return false;
}

bool digitinthou (int num)
{
   int tens, thou;

   tens =  (num / 10) %10;
   thou =  (num / 1000) %10;

   if (thou == (tens * 3))
      return true;
   else
      return false;
}

int main()
{
   // Variables
   int i;
   // Processing


   for (i = 1000; i <=9999 ; i ++)
   {
      if (numberIsOdd(i) == false)
         continue;

      if (sumis27(i) == false)
         continue;

      if (fourdigitsdifferent(i) == false)
         continue;

      if (digitinthou(i) == false)
         continue;

      cout << i << " Pensylvania is the address. " << endl;
   }
   return 0;
}
