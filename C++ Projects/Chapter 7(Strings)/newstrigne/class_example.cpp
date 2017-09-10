#include <iostream>
#include<stdio.h>
using namespace std;
// firstly the inherited object is processed, then the parent class
class B
{
public:
B() { printf("B ");}
~B() {printf("~B ");}
};

class D: public B
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
