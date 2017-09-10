#include <iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<memory>

using namespace std;

int main()
{
   //find a replace a word in a text

   string text, word, replacement;

   cout<<"Input text and press Enter: \n";
   getline(cin,text);
   cout<<"Input the word to be replaced:\t";
   cin>>word;
   cout<<"Input the replacement word:\t";
   cin>>replacement;


   if(word == replacement)
    {
        cout<<"\n The word and the replacement are the same.Operation aborted";
        return 1;

    }

    size_t start{text.find(word)};

    while(start != string::npos)
    {
        text.replace(start, word.length(), replacement);
        start= text.find(word, start + replacement.length());

    }
    cout<<"\n The string you entered is now: \n"<<text<<endl;



return 0;

}
