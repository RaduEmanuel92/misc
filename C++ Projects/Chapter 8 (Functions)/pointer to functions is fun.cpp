//exercising pointers to functions
#include<iostream>

using namespace std;

long sum(long a, long b);
long product(long a, long b);

int main()
{
    // easy initialization: auto (*pFun) = product;
    long (*pFun)(long, long) {nullptr};
    pFun = product;
    cout<<"3*5= "<<pFun(3,5)<<endl;

    pFun = sum;
    cout<<"3*(4+5) + 6= "<<pFun((product(3, pFun(4,5))),6);



}

//function to multiply two values
long product(long a, long b)
{
    return a*b;
}

//add two values
long sum(long a, long b)
{
    return a+b;
}
