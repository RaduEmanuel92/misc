#include <iostream>

using namespace std;

int main()
{
      //compare function

    //test further compare

string text {"Home vibe ribbon vice vibe little rat"};
string word {"vibe"};
int nr{};
size_t position {};


for(size_t i{} ; i <= text.length()-word.length() ; )
    {
        position=text.find(word,i);


        if(position == string::npos) break;

         cout<<"Occurrence: "<<position<<endl;
        nr++;
        i=position+1;



    }



return 0;
}

