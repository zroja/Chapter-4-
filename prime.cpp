// Zahin Roja
// November 9, 2017
// Prime Number Extra Credit

#include <iostream>
using namespace std;

// Prototype
bool prime(int amount);
void repetition (int primenumber);

int main()
{
   // Variables
   int primeNumber, amount;
   string answer;

   // Input
   cout << "Hi, Welcome to finding primes!" << endl;
   do
   {
      cout << "How many prime number do you want to see? " << endl;
      cin >> primeNumber;

      // Processing and Output
      if(primeNumber <= 0)
      {
         cout << "I can't search for " << primeNumber << " prime numbers" << endl;
      }
      else if(primeNumber > 0)
      {
         cout << "The first " << primeNumber << " numbers are " << endl;
         repetition(primeNumber) ;
         cout << endl;

      }
      cout << "Would you like to try again? (yes or no)" << endl;
      cin >> answer;

   } while (answer == "yes");

   cout << "Have a nice day!" << endl;
   
   return 0;
}

bool prime(int amount)
{
   bool answer = true;
   for(int i=2; i < amount; i++)
   {
      if(amount%i == 0)
      {
         answer = false;
      }
   }
   return (answer);
}

void repetition(int primeNumber)
{
   int loops = 0;
   for ( int i = 2; ; i++)
   {
      if(prime(i)== true)
      {
       loops++;
       cout << i << "\t";
          if(loops == primeNumber)
          {
             break;
          }
      }
    }
}


