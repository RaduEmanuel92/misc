// recursion fibonacci
#include<iostream>

using namespace std;

int fib(int n);
int main()
{
    int m{0};
    cout<<"Fib array for: ";cin>>m;
    cout<<"\nFib sequence for given value is: "<<fib(m);

}

int fib(int n)
{
    if(n == 1)
        {
        return 1;}

    if(n == 2)
        {
        return 1;}
    else
    if(n > 2)
        {
        return fib(n-1) + fib(n-2);}

}
