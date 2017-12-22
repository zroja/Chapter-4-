// Zahin Roja
// November 10, 2017
// Extra Credit 2: Reverse the words

#include <iostream>
#include <string>
using namespace std;

// Prototype
void swap (char&, char&);
int main()
{

   // Vars
   string sentence;
   string answer;

   // Input
   cout << "Welcome to Reverse-the-words" << endl;

        do
        {
                cout << "Enter your sentence, word, or phrase" << endl;
                getline(cin,sentence);

                int wordbegin =0;
                for (int i=0; i <= sentence.length(); i++)
                {
                        if(!isalpha(sentence[i]))
                        {
                                for(int j = wordbegin; j < (i-(i-wordbegin)/2);j++)
                        {
                                swap(sentence[j], sentence[ i - j + wordbegin -1]);
                        }
                        wordbegin = i+1;
                        }
                }

   // Output
        cout << "Your phrase with all of the words reversed is " << endl;
        cout << sentence << endl ;
        cout << "Would you like to reverse the words in another phrase? " << endl;
        cin >> answer ;
        cin.ignore();

        } while (answer == "yes");

   cout << "Goodbye" << endl;

   return 0;
}

void swap(char &v1, char &v2)
{
        char temp;
        temp = v1;
        v1= v2;
        v2=temp;
}
