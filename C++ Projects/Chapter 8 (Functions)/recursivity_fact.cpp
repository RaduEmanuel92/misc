//playing with recursion

#include<iostream>

using namespace std;

int fact( int n);

int main()
{
    int m{0};
    cout<<"Fact for: ";cin>>m;
    cout<<"\nFact for given value is: "<<fact(m);

}

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);

}
