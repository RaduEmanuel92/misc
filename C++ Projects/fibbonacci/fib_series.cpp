//Exercise 5-6. The famous Fibonacci series is a sequence of integers with the first two values
//as 1 and the subsequent values as the sum of the two preceding values. So it begins 1, 1,
//2, 3, 5, 8, 13, and so on. This is not just a mathematical curiosity. It relates to the way shells
//grow in a spiral and the number of petals on many flowers is a number from this sequence.
//Create an array<> container with 90 elements. Store the first 90 numbers in the Fibonacci
//series in the array, then output the 5 to a line, aligned in columns.

#include <iostream>
#include<iomanip>
#include<array>
using namespace std;

int main()
{
    //create array

    array<unsigned long long,90> fib;
    fib.fill(1);

    for(int i=2;i<fib.size();i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    unsigned ok{0};
      for(int i=0;i<fib.size();i++)
    {
        cout<<setw(20)<<fib[i]<<setw(20);
        ++ok;
        if(ok==4)
        {
            ok=0;
            cout<<endl;
        }

    }


    return 0;
}
