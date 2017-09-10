#include<iostream>
#include "box1.h"
//box cpp
using namespace std;
//constructor definition
Box::Box (double len, double wid, double hei)
{
    cout<<endl<<"Box created.";
    length = len;
    width = wid;
    height = hei;
}

Box:: Box(){}; //no arg constructor def

double Box::volume()
{
    return length*width*height;

}

int main()
{
    double dim[3];
    cout<<"Input len, width and hei of the box: ";
     for(size_t i {0}; i<3; ++i)
        {
            cin>>dim[i];
        }

    Box mybox {dim[0], dim[1], dim[2]};
    cout<<endl<<"Box volume is: "<<mybox.volume();
}
