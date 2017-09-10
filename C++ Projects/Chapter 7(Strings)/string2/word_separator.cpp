#include <iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<memory>

using namespace std;

int main()
{
/*
    string text {"Ahoy! whaddup btches?"};
    string separators {" ,.\"?"};
    cout<< text.find_first_of(separators)<<endl;
    cout<<text.find_first_not_of(separators)<<endl;

*/
   // Extracting words from a string

 string text;
 cout<<"Input text terminated with * :\n";
 getline(cin, text);

 const string separators{ " ,.;:!\"?\n'" }; // word delimiters
 vector<shared_ptr<string>>words ; //words found

 size_t start{ text.find_first_not_of(separators) }; //first word start index
 size_t last {} ; //index for end of a word

 while (start != string::npos)
 {
     last= text.find_first_of(separators, start+1); // find end of word

     if(last == string::npos) // reached the final?
     last = text.length(); // yes, last word count

    words.push_back(make_shared<string>(text.substr(start, last - start))) ; // store the word
     start = text.find_first_not_of(separators, last+1);

 }

 cout<<"Your text contains the following words :\n";
 size_t nr {};

 for( const auto& word: words)
 {
     cout<<setw(15)<< *word;
     if((++nr)%5 == 0)
        cout<<endl;

 }

 cout<<"\n Your text contains "<<nr<<" words.";


return 0;

 }



