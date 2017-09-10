//using a function template
#include<iostream>
using namespace std;

template <typename TReturn, typename TArg>
TReturn larger(TArg a, TArg b);
int main()
{
    cout<<"Larger of 1.5 and 2.5 is "<< larger<int,int>(1.5, 2.5)<<endl;
    cout<<"Larger of 1.5 and 1.55 is "<< larger<double,int>(1.5, 1.55)<<endl;
    double a{20.5}, b{20.6};
    cout<<"Larger of b and a is "<< larger<double,double>(a, b)<<endl;
}
//template for fcns to return the larger of 2 values

template <typename TReturn, typename TArg>
TReturn larger(TArg a, TArg b)
{
    return a > b ? a-0.1 : b-0.1;
}

