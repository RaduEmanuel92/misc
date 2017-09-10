#include <iostream>
#include<iomanip>
using namespace std;

int main()
{ //test if char written is either a vocal , a consonant, or is not a letter

  char v{};

  cout<<"Imput: "<<endl;
  cin>>v;

  switch (tolower(v)*static_cast<bool>(isalpha(v)))
  {
     case 'a' : case 'e': case 'i' : case 'o' : case 'u':
        cout<<"This is a vocal. "<<endl;
        break;
    case 0 :
        cout<<"This is not a letter."<<endl;
        break;
    default :
        cout<<"This is a consonant."<<endl;

  }

return 0;

}
