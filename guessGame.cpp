// Zahin Roja
// November 13, 2017
// Guessing game : Lab 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Prototype
void input(int&, char&);
void processing (int&, char&);
int output(int, int, char, char, int&);

int main()
{
        // Vars
        int totalpoints = 0;
        int dieroll, generateddieroll;
        char coinflip, generatedcoinflip, answer;

        // Init
        srand(time(NULL));

        do
        {

        input(dieroll, coinflip);
        processing(generateddieroll, generatedcoinflip);
        output(dieroll, generateddieroll, coinflip, generatedcoinflip, totalpoints);        cout << "Do you want to try again? (Y/N)" << endl;
        cin >> answer;

        } while (answer == 'Y');

        cout << "Goodbye. Thanks for playing" << endl;

        return 0;
}

void input(int &dieroll, char &coinflip)
{
        cout << "The computer will roll a six-sided die and flip a two sided coin" << endl;
        cin >> dieroll;
        cin >> coinflip;
}

void processing(int &generateddieroll, char &generatedcoinflip)
{
        int ranNumber;
        int tempnumber;

                ranNumber = rand();
                generateddieroll = (ranNumber % 6)+1;

                ranNumber = rand();
                tempnumber = (ranNumber % 2 ) + 1;
                if(tempnumber == 1)
                {
                        generatedcoinflip = 'H';
                }
                else
                {
                        generatedcoinflip = 'T';
                }

}

int output(int dieroll, int generateddieroll, char coinflip, char generatedcoinflip, int &totalpoints)
{
        int ranNumber;


        if (dieroll==generateddieroll && coinflip==generatedcoinflip)
        {
                cout << "Correct! Die roll was " << generateddieroll << " , coinflip was " << generatedcoinflip << endl;
                totalpoints+=10;
        }
        else
         {
                cout << "Incorrect! Die roll was " << generateddieroll << ", coinflip was " << generatedcoinflip << endl;
                totalpoints--;
        }

        cout << "Total points: " <<totalpoints << endl;
}


