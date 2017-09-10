#include<iostream>
#include<math.h>

using namespace std;

int prime(long long int x)
{
    int ok{0};
     for(long long j{2}; j <= sqrt(x); j++)
        if(x%j == 0)
        {
            ok=1;
            break;
        }

    if (ok == 0)
            return 1;
        else
            return 0;

}

int main()

{
    long long int s{0};
    for(long long int i{2}; i <= 2000000; i++)
    if( prime(i) == 1 )
    {
        cout<<i<<" ";
        s+=i;
        cout<<s<<endl;
    }



   return 0;

}

