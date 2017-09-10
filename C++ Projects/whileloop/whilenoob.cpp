#include <iostream>
#include<locale> // for tolower()
using namespace std;

int main()
{
    cout<<numeric_limits<unsigned char>::max<<endl;
    cout<<setw(11)<<"Character "<<setw(13)<<"Hexadecimal"
        <<setw(9)<<"Decimal"<<endl;




    return 0;
}
