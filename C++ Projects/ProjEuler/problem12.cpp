#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;


int testdiv(long int a)
{
    int nr=2;

    for(long int i{2} ;i <= a/2; i++)
        if(a%i == 0)
         ++nr;

        if (nr >= 500)
        return 1;
        else
        return 0;
}
int main()

{
    long int s{0};

    for(long int i{1}; i<= 1000000; i++)
        {
         s=s+i;
         cout<<s<<endl;
         if(testdiv(s) == 1)
         {
         cout<<"Finnally! "<<s;
         break;
         }
        }


}

