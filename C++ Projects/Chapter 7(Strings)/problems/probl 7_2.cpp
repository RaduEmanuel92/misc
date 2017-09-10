/*************************************************************
    Exercise 7-2. Write a program that reads text entered over an arbitrary number of lines. Find and
record each unique word that appears in the text and record the number of occurrences of each
word. Output the words and the number of occurrences of each word, three words and their
counts per line. Words and counts should align in columns.

***************************************************************/


#include <iostream>
#include <iomanip>
#include <string>
#include<vector>

using namespace std;

int main()
{
    string text;
    cout<<"\nIntroduce the text and press '*' to finish : \n ";
    getline(cin, text, '*');

    const string separators{" !.,:';\"?\n-"};
    size_t startw {text.find_first_not_of(separators)};                 ///beginning of word
    size_t endw {};
    string word, lcword;
    vector<string> words;
    vector<int> occurrences;


///find all the words, count  and delete them

    while(startw != string::npos)
    {
        endw=text.find_first_of(separators, startw+1);
        if (endw == string::npos)
            endw=text.length();

        word=text.substr(startw, endw - startw);                            ///isolate the word

        for(auto& l:word)
        l=tolower(l);


        words.push_back(word);

         size_t index {endw};
         size_t nr {1};                                                     /// count the occurrences of words, at least one for each word in the text

            while( (index = text.find(word, index)) != string::npos)
                {
                    if( isalpha((text[index-1])) || isalpha((text[index+word.length()])) )
                    {
                        index=text.find_first_of(separators,index+1);
                        if(index == string::npos)
                            index = text.length();
                        continue;

                    }
                    ++nr;                                                   /// if standalone word repeats, count it

                    text.erase(index, word.length());                       /// and delete word
                    index+=1;
                }

         occurrences.push_back(nr);
         nr=0; //reset

        startw= text.find_first_not_of(separators, endw + 1);
    }

    // output words and number of occurrences

  cout<<"\n The words of the text and the number of occurrences are:\n";

  for(size_t i {};i<words.size(); i++)
 {
     cout<<left<<setw(10)<<words[i]<<" : "<<setw(3)<<right<<occurrences[i]<<" times   ";
     if ((i+1)%3 == 0) cout<<endl;

 }


}
