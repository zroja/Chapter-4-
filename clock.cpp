# Chapter-4-
// Zahin Roja
// November 13, 2017
// Homework 8 - Clock function

#include <iostream>
using namespace std;

// Prototype

void input(int& , int&);
void conversion (int&, char&);
int outputFunc(int, int, char);

int main()
{
        // Vars
        char answer, ampm;
        int hours, minutes;

        do
        {

                input(hours, minutes);
                conversion( hours, ampm);
                outputFunc(hours, minutes, ampm);

        cout << "Would you like to go again? (Y/N)" << endl;
        cin >> answer;
        } while (answer == 'Y');

        cout << "Have a nice day" << endl;

        return 0;
}

// The input function
void input(int &hours, int &minutes)
{

        cout << "Enter the hours" << endl;
        cin >> hours;
        if(hours > 23)
         {
                cout << "Please enter a value between 0 and 23" << endl;
        }
        cout << "Enter the minutes" << endl;
        cin >> minutes;
        if (minutes > 59)
        {
                cout << "Please enter a value between 0 and 59" << endl;
        }
}
// The conversion function
void conversion (int &hours,  char &ampm)
{

        if(hours > 12)
        {
                hours= hours -12;
                ampm = 'p';
        }
        else if (hours == 12)
                ampm = 'p';
        else
                ampm = 'a';
}

// The output function
int outputFunc(int hours, int minutes, char ampm)
{
        if (ampm == 'p')
        {
                if(minutes < 10)
                {
                        cout << hours << ":0" << minutes << "PM" << endl;
                }
                else
                        cout << hours << ":" << minutes << "PM" << endl;
        }
        else
        {
         if(minutes < 10)
                {
                        cout << hours << ":0" << minutes << "AM" << endl;
                }
                else
                        cout << hours << ":" << minutes << "AM" << endl ;
        }
}
