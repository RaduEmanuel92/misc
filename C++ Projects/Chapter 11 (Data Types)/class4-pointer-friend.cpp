#include<iostream>
#include "box3.h"
#include<memory>
using namespace std;

Box::Box()
{
    cout<<endl<<"No-arg box created.";

} // automatic constructor

Box::Box(double len, double wid, double hei) : height{hei}, length{len}, width{wid}
{
    cout<<endl<<"Box created  by contructor1. ";
}

Box::Box(double len) : height{len}, length{len}, width{len}
{
    cout<<endl<<"Cube created by constructor2";
}

Box::Box(const Box& mybox) : height{mybox.height}, length{mybox.length}, width{mybox.width}
{
    cout<<endl<<"Copy of selected box created. ";
}

double Box::volume()
{
    return length*width*height;
}

double lateral_surface(const Box& mbox)
{
    return 2*(mbox.length*mbox.height+ mbox.length*mbox.width + mbox.width*mbox.height);
}

int main()
{
    Box mybox1 {1,3,5};
    Box mybox2 {2,3,4};
    Box cube1 {3};
    Box cube2 {cube1};
    auto pbox1 = make_shared<Box> (4,5,6);

    cout<<endl<<"Area of mybox1 is: "<<lateral_surface(mybox1);
    cout<<endl<<"Volume of mybox1 is: "<<mybox1.volume();
    cout<<endl;

     cout<<endl<<"Area of mybox2 is: "<<lateral_surface(mybox2);
    cout<<endl<<"Volume of mybox1 is: "<<mybox2.volume();
    cout<<endl;

     cout<<endl<<"Area of cube1 is: "<<lateral_surface(cube1);
    cout<<endl<<"Volume of cube1 is: "<<cube1.volume();
    cout<<endl;

    cout<<endl<<"Area of cube2 is: "<<lateral_surface(cube2);
    cout<<endl<<"Volume of cube2 is: "<<cube2.volume();
    cout<<endl;

    cout<<endl<<"Area of pbox1 is: "<<lateral_surface(*pbox1);
    cout<<endl<<"Volume of pbox1 is: "<<pbox1->volume();
    cout<<endl;
    Box some[5];
}
