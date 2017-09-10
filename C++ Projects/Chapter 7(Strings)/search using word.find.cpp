/*************************************************************
 Ex7: searching a string
***************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
   string text{};
   string word{};
   cout<<"Enter the string to be searched and press Enter: \n";
   getline(cin,text);
   cout<<endl;
   cout<<"Enter the string to be found and press Enter:\n";
   getline(cin,word);
   size_t nr{}, i{};

   while((i = text.find(word,i)) != string::npos)
   {
       ++nr;
       i += word.length();

   }
   cout<<endl;
   cout<<" Your text contained "<<nr<<" occurrences of \""
       <<word<<"\"."<<endl;


}

