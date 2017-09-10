#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long s1{0}, s2{0};
    for(int i{1};i<=100;i++)
    {
        s1=s1+pow(i,2);
        s2=s2+i;
    }
    cout<<fixed;
    cout<<s1-pow(s2,2);

}
