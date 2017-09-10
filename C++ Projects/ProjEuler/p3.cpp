
   /*  The prime factors of 13195 are 5, 7, 13 and 29.
        What is the largest prime factor of the number 600851475143 ?*/
  // RadwRock07 , pws you know it

#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int prime(long long int x)
{ int ok{0};
     for(long long j{2};j <= sqrt(x);j++)
        if(x%j==0)
        {
            ok=1;
            break;
        }

    if (ok==0)
            return 1;
        else
            return 0;

}

int main()

{
    long long int limit{600851475143} , factor{0};

for(long long i{2};i <= sqrt(limit);i++)

    if(limit%i==0)
    {
        cout<<"Found divisor for limit: "<<i<<" .Testing if prime:... "<<endl;

        if(prime(i)==1)
        {
            factor=i;
            cout<<" Yes."<<endl;
            cout<<"Current prime divisor: "<<factor<<endl;

        }
        else
            cout<<"No."<<endl;


    }


    return 0;
}
