#include <stdio.h>
#include<iostream>
#include<string.h>
#include<iomanip>
#include<vector>
#include<memory>

// program which extracts words from a text using
//  functions
using   namespace std;

 shared_ptr<vector<string>> find_words( const string& str, const string& separators);
void list_words(const shared_ptr<vector<string>> pwords);

int main()
{
   string text;

  cout<<"Introduceti textul terminat cu '*' : "<<endl;
  getline(cin, text, '*');
  const string separators{" ,.:;!?\"'\n"}; //separators

  auto pwords = find_words(text, separators);
  list_words( pwords);

}

 shared_ptr<vector<string>> find_words( const string& str, const string& separators)
{
    auto pwords = make_shared<vector<string>>();
    size_t startw{str.find_first_not_of(separators)};
    size_t endw{};

   while(startw != string::npos)
   {
       endw = str.find_first_of(separators, startw+1);
       if(endw == string::npos)
       {
           endw = str.length();
       }
   pwords -> push_back(str.substr(startw, endw-startw));
   startw = str.find_first_not_of(separators, endw+1);
   }

return pwords;
}

void list_words(const shared_ptr<vector<string>> pwords)
{
    cout<<"Your text contains the following words :\n\n";
    size_t nr{0};
    for(const auto& w: *pwords)
    {
      cout<<setw(15)<<w;
      if(!(++nr % 5))
       cout<<endl;
    }
    cout<<endl;
}






