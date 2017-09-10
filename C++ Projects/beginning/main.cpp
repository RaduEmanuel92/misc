#include <iostream>
#include<locale> // for tolower()
#include<limits>
#include<iomanip>
using namespace std;

int main()
{
    cout<<numeric_limits<unsigned char>::max()<<endl;
    cout<<numeric_limits<unsigned long long>::max()<<endl;
    cout<<endl;

    cout<<setw(11)<<"Character "<<setw(13)<<"Hexadecimal"
        <<setw(9)<<"Decimal"<<endl;
cout<<uppercase<<showbase;

unsigned char ch{};
do
{
    if(!isprint(ch))
        continue;
    cout<<setw(6)<<ch
        <<hex<<setw(12)<<static_cast<int>(ch)
        <<dec<<setw(10)<<static_cast<int>(ch)
        <<endl;
}while(ch++ < numeric_limits<unsigned char>::max());


    return 0;
}
