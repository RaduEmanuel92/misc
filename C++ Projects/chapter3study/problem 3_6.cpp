#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
     cout<<"Input a and b and press enter";
     cin>>a>>b;
     cout<<endl;

     cout<< (a<b ? "a is less than b":(a=b ? "a is equal to b": "a is greater than b"));

     return 0;

}
