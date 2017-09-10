//using a function template
#include<iostream>
using namespace std;

template <typename T> T larger(T a, T b);
template <> long* larger<long*>(long* a, long* b)
{
return *a > *b ? a : b;
}
long* larger(long* a, long* b);
int main()
{
    cout<<"Larger of 1.5 and 2.5 is "<< larger(1.5, 2.5)<<endl;
    cout<<"Larger of 1.5 and 2.5 is "<< larger<int>(1.5, 2.5)<<endl;
    const int a{20}, b{99};
    cout<<"Larger of b and a is "<< larger<char>(a, b)<<endl;

    cout<<"larger of a and b is "<<*larger(&a, &b)<<endl;

}
//template for fcns to return the larger of 2 values

template <typename T>
T larger(T a , T b)
{
    return a > b ? a : b;
}

const long* larger(const long* a, const long* b)
{    cout<<"test";
    return *a > *b ? a : b;
}
