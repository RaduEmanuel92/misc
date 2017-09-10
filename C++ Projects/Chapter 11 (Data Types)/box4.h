#ifndef BOX4_H
#define BOX4_H
#include<iostream>
#include<iomanip>
#include<iostream>
using namespace std;
class Box
{
private:
    double length{1.0};
    double width{1.0};
    double height{1.0};
public:
    //constructors
    Box(double len, double wid, double hei): length{len}, width{wid}, height{hei}
    {

    }
    Box()
    {
        //no arg constructor
    }

Box(const Box& box) : // Copy constructor
        length {box.length}, width {box.width}, height {box.height}
{
}
    double volume() const
    {
        return length*width*height;
    }

  int compare(const Box& box)
{
if (volume() < box.volume()) return -1;
if (volume() == box.volume()) return 0;
return 1;
}

    void listBox()
    {
        cout<<"Box("<<setw(3)<<length<<","
        <<setw(3)<<width<<","
        <<setw(3)<<height<<") ";
    }
};

#endif // BOX4_H
