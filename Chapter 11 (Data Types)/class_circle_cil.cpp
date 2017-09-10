#include<iostream>
#include<iomanip>
using namespace std;

class Circle
{
private:
    double radius{1.0};
public:
    double area()
    {
        double pi{3.1418};
        return pi*radius*radius;
    }

    double rad()
    {
        return radius;
    }
Circle() {} //defaul constructor

Circle(double r) : radius {r} {};

Circle(const Circle&  cir) : radius{cir.radius}
{}

};

class Cylinder
{
private:
    Circle base;
    double height;

public:

    double lat_area()
    {
        return 2 * base.rad() *3.1412 * height;
    }
    double volume()
    {
        return base.area()*height;
    }

    Cylinder () {} //default cir

    Cylinder (double r, double h):  base{r}, height{h}
    {}
    Cylinder ( Circle cir, double h) :  base{cir.rad()}, height{h}
    {}

Cylinder (const Cylinder& cil) : base{cil.base}, height{cil.height}
{}

};

int main()
{
    Circle mycircle {2};
    Cylinder mycil {mycircle, 10};
    Cylinder cil2 {3,3};
    Cylinder

    cout<<endl<<"Area cir: "<<mycircle.area();
    cout<<endl<<"Volume cil: "<<mycil.volume();

    cout<<endl<<"Vol cil2: "<<cil2.volume();
}
