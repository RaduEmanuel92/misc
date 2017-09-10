// Recursive version of function for
//x to the power n, n positive or negative
#include<iostream>
#include<iomanip>

using namespace std;

double power(int a, int p);
int main()
{
    for(int i{-3} ; i<=3 ; ++i)
        cout<<setw(10)<<power(8, i);
        cout<<endl;

}

double power(int a, int p)
{
    if(p == 0)
        return 1;
    else
        if(p>0)
        return a * power(a, p-1);

    if(p<0)
    return 1/(power(a, -p));
}
