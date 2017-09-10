#include<iostream>
#include "box2.h"
//box2.cpp
using namespace std;
//box class definition

Box::Box(double len, double wid, double hei) : length{len}, width{wid}, height{hei}
{
    cout<<endl<<"Box created (Constructor 1: dif dimensions). ";
}
Box::Box(double len) : length{len}, width {len}, height{len}
{
    cout<<endl<<"Cube created (constr 2 called). ";
}double Box::volume()
{
    return length * width * height;
}

Box::Box (const Box& mybox) : length{mybox.length}, width {mybox.width}, height{mybox.height} //always use const class_name&
 {
     cout<<endl<<"Created a copy constructor. ";
 }

double Box::getlength()
{
    return length;
}
double Box::getwidth()
{
    return width;
}
double Box::getheight()
{
    return height;
}
double Box::setlength( double len)
{
    if(len>0)
    length = len;
}
double Box::setwidth(double wid)
{
    if(wid>0)
    width = wid;
}
double Box::setheight(double hei)
{
    if(hei>0)
    height = hei;
}


int main()
{
  Box mybox1 {1,3,5};
  Box mybox2 {2};
  Box mybox3 {mybox2};
  //default copy constructor- returns the same value as bo2
  cout<<endl<<"Volume of mybox1 is: "<<mybox1.volume();
  cout<<endl<<"Volume of mybox2 is: "<<mybox2.volume();
  cout<<endl<<"Volume of mybox3 is: "<<mybox3.volume();
  cout<<endl<<"Length of cube is: "<<mybox2.getlength();
  mybox3.setlength(20);
  cout<<endl<<"Length of 2nd cube is: "<<mybox3.getlength();

}
