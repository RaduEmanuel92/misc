#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int range{100};
    char text[range];

    cout<<"Introduceti fraza si apasati ENTER:\n";
    cin.getline(text,range);
    cout<<endl;
    cout<<text;


    return 0;



}
