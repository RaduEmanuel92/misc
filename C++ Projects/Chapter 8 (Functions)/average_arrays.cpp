#include <stdio.h>
#include<iostream>
#include<bitset>       /* std::cout << std::bitset<32>(v);- to output binary form (32 bits) */
using   namespace std;

double av ( const double* x, int nr);
int main()
{
    double v[10];

    for(size_t i{0};i<10;++i)
        cin>>v[i];

    for(size_t i{0};i<10;++i)
        cout<<v[i]<<" ";

cout<<endl;

cout<<"The average of the elements of the array is: "<<av(v, (sizeof v)/(sizeof v[0]));
}

double av(const double* x, int n)
{  double s{0};
    for(size_t i{0};i<n;++i)
        s+=*(x++);
    return s/n;
}


