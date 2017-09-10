// Recursive version of function for
//x to the power n, n positive or negative
#include<iostream>
#include<iomanip>

using namespace std;

int sum(int a, int b);
int subtract(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int* f1(int a, int b);
int* f2(int a, int b);
int* f3(int a, int b);
int* f4(int a, int b);

int (*p[4])(int , int){sum, subtract, mul, div};
int* (*r[4]) (int, int){f1,f2,f3,f4};

int main(void)
{
  int result;
  int i, j, op;
  cout<<"Difference(2,3): "<<p[1](2,3)<<endl;
  cout<<"product(2,3): "<<p[2](2,3)<<endl;

  cout<<"Pointers"<<endl;;
  cout<<"f1 is: "<<r[0] (1,1)<<endl;
  cout<<"f2 is: "<<r[1] (1,1)<<endl;

}

int sum(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

int div(int a, int b)
{
    return a/b;
}
int* f1(int a, int b)
{
    int* p{nullptr};
    cout<<"f1 exe";

    return p;
}

int* f2(int a, int b)
{

    int* p{nullptr};
     cout<<"f2 exe";
    return p;

}

int* f3(int a, int b)
{
    int* p{nullptr};
     cout<<"f3";
    return p;
}

int* f4(int a, int b)
{
    int* p{nullptr};
    cout<<"f4";
    return p;
}
