/*************************************************************
    Exercise 7-3. Write a program that reads a text string of arbitrary length from the keyboard and
prompt for entry of a word that is to be found in the string. The program should find and replace
all occurrences of this word, regardless of case, by as many asterisks as there are characters in
the word. It should then output the new string. Only whole words are to be replaced. For example,
if the string is "Our house is at your disposal." and the word that is to be found is “our,”
then the resultant string should be: "*** house is at your disposal." and not "*** house
is at y*** disposal."

***************************************************************/


#include <iostream>
#include <iomanip>
#include <string>
#include<vector>

using namespace std;

int main()
{
    string text{};
    cout<<"Introduce the text and press '*' to finish : \n";
    getline(cin, text, '*');

    string word;
    cout<<"\nIntroduce word to be found:\t";
    cin>>word;

    const string separators{" ,;:.\"!?'-\n"};               //word delimiters
    string mot;
    size_t startw {text.find_first_not_of(separators)};     //beginning of first word
    size_t endw {};

    while(startw != string::npos)
    {
        endw=text.find_first_of(separators, startw + 1);
        if(endw == string::npos)
            endw = text.length();

        mot = text.substr(startw, endw - startw);           //isolate word

        if (mot.length() == word.length())
        {
            bool ok{true};
            for( size_t i {}; i<word.length(); i++)
             if(tolower(word[i]) != tolower(mot[i]) )
             {
                 ok=false;
                 break;
             }

            if(ok)
            text.replace(startw, word.length(),  word.length(), '*');

        }

        startw = text.find_first_not_of(separators, endw + 1);
    }

    cout<<"\n The modified text is: \n"<<text;


}

