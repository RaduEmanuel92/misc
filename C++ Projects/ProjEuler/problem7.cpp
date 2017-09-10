#include<iostream>
#include<math.h>
using namespace std;

int prime (int a)
{
    int ok{1};
    for(int i{2}; i<=sqrt(a); i++)
        if(a%i == 0)
        {
            ok=0;
        }

        return ok;

}

int main()
{
    cout<<prime(20)<<endl;
    int counter{0},d{1};
    while(counter<10001)
        {
        ++d;
        if(prime(d))
        ++counter;
        }
        cout<<d;
}
