#include <stdio.h>
#include<iostream>
#include<string.h>
#include<iomanip>
#include<vector>

// program which extracts words from a text using
//  functions
using   namespace std;

void find_words( vector<string>& words, string& str, const string& separators);
void list_words(const vector<string>& words);

int main()
{
  string text;

  cout<<"Introduceti textul terminat cu '*' : "<<endl;
  getline(cin, text, '*');
  const string separators{" ,.:;!?\"'\n"}; //separators
  vector<string> words; // words found

  find_words(words, text, separators);
  list_words(words);

}

void find_words(vector<string>& words, string& str, const string& separators)
{
    size_t startw{str.find_first_not_of(separators)};
    size_t endw{};

   while(startw != string::npos)
   {
       endw = str.find_first_of(separators, startw+1);
       if(endw == string::npos)
       {
           endw = str.length();
       }
   words.push_back(str.substr(startw, endw-startw));
   startw = str.find_first_not_of(separators, endw+1);
   }


}

void list_words(const vector<string>& words)
{
    cout<<"Your text contains the following words :\n";
    size_t nr{0};
    for(const auto& w: words)
    {
      cout<<setw(15)<<w;
      if(!(++nr % 5))
       cout<<endl;
    }
    cout<<endl;
}






