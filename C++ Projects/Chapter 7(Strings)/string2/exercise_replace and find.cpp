#include <iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<memory>

using namespace std;

int main()
{
    string text {"To be or not to be."};
    string txt;
    cout<<text.find("to")<<endl
        <<text.find("To")<<endl;

text.insert(3,"fucking ");
cout<<text<<endl;
   text.replace(3 , 7 ,"***");
   cout<<endl<<text;
return 0;

}
