#include <iostream>
#include<iomanip>
using namespace std;

int main()
{ int a{};
 cout<<"a= "<<endl;
 cin>>a;

 cout<< ( a<=20 ? "input is smaller than 20." :
        ( a<=30 ? "Between 20 and 30." :
        ( a<100 ? "Between 30 and 100" : "Greater than 100.")));



return 0;

}
