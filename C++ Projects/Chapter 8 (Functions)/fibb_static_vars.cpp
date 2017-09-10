//using static variables
#include<iostream>
#include<iomanip>
using namespace std;
long next_fib();

int main()
{
    size_t nr{0};
    cout<<"Enter the nr of Fibonacci values to be generated: ";
    cin>>nr;
    cout<<"\n The Fibonacci series:\n";
    for(size_t i{0} ; i<nr; ++i)
        {
            cout<<setw(10)<<next_fib();
            if(!((i+1)%4))
                cout<<endl;
        }
        cout<<endl;
}

long next_fib()
{
    static long last{0};
    static long last2{1};

    long next{last+last2};
    last2=last;
    last=next;
    return last;
}
