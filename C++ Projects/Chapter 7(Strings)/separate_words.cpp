/*************************************************************
 Ex7.4: Write a program that prompts for input of two words and determines whether one
is an anagram of the other.
***************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    string word1 {};
    cout<<"Input the first words and press Enter\n";
    getline(cin, word1);

    string word2 {};
    cout<<"Input the first words and press Enter\n";
    getline(cin, word2);

    int ok{1};
    if(word1.length() == word2.length())

     for(size_t i{0};i<word1.length();++i)
      {

       if(word2.find(word1[i]) != string::npos)
        {
            word2.erase((word2.find(word1[i])),1);
        }
        else
        {
        ok=0;
        break;

        }
        }

        else
        ok=0;

            if(ok)
                cout<<"One word is the anagram of the other";
            else
                 cout<<"One word is not the anagram of the other";



}

