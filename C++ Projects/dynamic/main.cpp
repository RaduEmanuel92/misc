#include <stdio.h>
#include<iostream>
#include<bitset>       //passing a two-dim array to a fcn
#include<string.h>
using   namespace std;

double yield(const double val[][4], size_t n);

int main()
{
    double beans[3][4] {
                         {1.0 , 2.0 , 3.0 , 4.0},
                         {5.0 , 6.0 , 7.0 , 8.0},
                         {9.0 ,10.0 ,11.0 ,12.0}
                       };

    cout<<"Total yield = "<<yield(beans, sizeof(beans)/sizeof(beans[0]));
    cout<<endl;
}

double yield(const double var[][4], size_t n)
{
    double sum{};

    for(size_t i{} ; i<n ; ++i)
        {
            for(size_t j{} ; j<4 ; ++j)
            {
                sum += var[i][j];

            }
        }

    return sum;


}
