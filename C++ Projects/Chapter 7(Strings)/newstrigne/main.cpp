#include <iostream>
#include<stdio.h>
using namespace std;

class B
{
public:
B() { printf("B ");}
~B() {printf("~B ");}
};

class D : public B
{
public:
D() {printf("D ");}
~D() {printf("~D ");}
void M() {printf("M ");}
};

int main()
{
D obiect;
obiect.M();

return 0;
}
