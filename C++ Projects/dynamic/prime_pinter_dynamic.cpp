#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{ //calculating primes using dynamic memory allocation

   size_t maxm {}; //number of primes from keyboard
   size_t nr {3}; // number of primes found

   cout<<"How many primes would you like? ";
   cin>>maxm;

   unsigned long long *primes{new unsigned long long[maxm]}; // allocate memory from the heap

   *primes=2;
   *(primes+1)=3;
   *(primes+2)=5; //first 3 primes in the array inserted

    unsigned long long trial {*(primes+2)}; // current candidate for prime
    bool isprime {false};                   // indicator for prime
    unsigned long long limit {};

    do
    {
        trial += 2; //next value for checking
        limit = static_cast<unsigned long long>(sqrt(trial));
        size_t i {};

        do
        {
            isprime=trial % *(primes+i) >0 ; // false for exact division
        } while(primes[++i]<=limit && isprime);

         if (isprime)
            *(primes+ nr++)= trial;
    } while(nr<maxm);

    //output 10 on a line

    for(size_t i{} ; i < maxm; ++i)
        {
            cout<<setw(6)<<*(primes+i);
            if((i+1)%10 == 0)
                cout<<endl;
        }

    cout<<endl;
    delete[] primes;
    primes=nullptr;


    return 0;
}
