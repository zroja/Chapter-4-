// Zahin Roja
// November 1, 2017
// Password Homework

#include <iostream>
using namespace std;

// Prototypes

bool passwordIsValid(string pw);
bool UppercaseLetter(string pw);
bool Digit(string pw);
bool Character(string pw);


int main()
{
   // Variables
   string pw;

   // Input
   cout << "Enter a value for the password." << endl;
   cin >> pw;

   // Processing
   if (passwordIsValid(pw) == true )
      cout << "Valid Password" << endl;

   else
      cout << "Invalid Password." << endl;


   return 0;
}

bool passwordIsValid(string pw)
{

   if ((pw.length() >= 10) && UppercaseLetter(pw) && Digit(pw) && Character(pw))
      return true;
   else
      return false;

}

bool UppercaseLetter(string pw)
{
   for (int i = 0; i < pw.length(); i++)
   {
      if(pw.at(i) >= 'A' && pw.at(i) <= 'Z')
        return true;
   }
   return false;

}

bool Digit(string pw)
{
   for(int i = 0; i < pw.length(); i++)
   {
      if(pw.at(i) >= '0' && pw.at(i) <= '9')
         return true;
   }
   return false;

}

bool Character(string pw)
{
   for(int i = 0; i < pw.length(); i++)
   {
      if(pw.at(i) == '!' || pw.at(i) == '@' || pw.at(i) == '#' || pw.at(i) == '$' || pw.at(i) == '%' || pw.at(i) == '^' || pw.at(i) == '&' || pw.at(i) == '*' || pw.at(i) == '(' && ')')
         return true;
   }
   return false;
}
