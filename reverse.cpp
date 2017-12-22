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
   string word;

   int i;

   // Input
   cout << "Welcome to Reverse-the-words" << endl;
   cout << "Enter your sentence, word, or phrase" << endl;
   getline(cin,sentence);

        for (int i=0; i < sentence.length()/2; i++)
{

        swap (sentence [i], sentence [sentence.length()-i-1]);
}

   // Output
   cout << "Your phrase with all of the words reversed is " << endl;
   cout << sentence << endl ;

   return 0;
}

void swap(char &v1, char &v2)
{
 char temp;
 temp = v1;
 v1= v2;
 v2=temp;
}

