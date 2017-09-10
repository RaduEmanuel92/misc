#include<iostream>
#include<math.h>
using namespace std;

int test(int a)
{
    int ok{1};
    for(int i{2}; i<=20; i++)
        if(a%i != 0)
        {
            ok=0;
        }

        if(ok==1)
        return 1;
}

int main()
{
    for(int i{2521}; i<=99999999; i++)
        if(test(i)== 1)
         {
             cout<<i;
             break;
         }
    return 0;
}
