#include <iostream>

using namespace std;

int main()
{
    string txt {};
    string word {};
    cout<<"Enter text to be searched and press Enter: \n";
    getline(cin, txt);
    cout<<"Enter text to be searched and press Enter: \n";
    getline(cin, word);

    size_t nr {};


    while((index=txt.find(word,index)) != string::npos)
    {
        nr++;
        index+=word.length();
    }
    cout<<nr<<endl;
// for loop


  // equivalent search

  for(size_t index {}; (index=txt.find(word,index)) != string::npos ; index+=word.length(), nr++);

   cout<<nr<<endl;

 // searching for a set of characters

 string text {"Ahoy! whaddup btches?"};
 string separators {" ,.\"?"};
 cout<< text.find_first_of(separators)<<endl;




return 0;
}

