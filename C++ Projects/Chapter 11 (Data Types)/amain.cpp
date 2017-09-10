#include<iostream>
#include "box2.h"
//box2.cpp
using namespace std;
//box class definition

Box::Box(double len, double wid, double hei) : length{len}, width{wid}, height{hei}
{
    cout<<endl<<"Box created (Constructor 1: dif dimensions). ";
}

Box::Box(double len)
{
  length=len;
  width= len;
  height= len;
 cout<<"\nCube called.\n";
}

double Box::volume()
{
    return length * width * height;
}

int main()
{
  Box mybox1 {1,3,5};
  Box mybox2 {};
  Box mybox3{2};
  cout<<endl<<"Volume of mybox1 is: "<<mybox1.volume();
  cout<<endl<<"Volume of mybox2 is: "<<mybox2.volume();
cout<<endl<<"Volume of mybox3 is: "<<mybox3.volume();
    return 0;
}
