#ifndef BOX2_H
#define BOX2_H
//box2 header
//class

class Box
{
private:
    double height{1};
    double width{1};
    double length{1};
public:
    Box() //no arg constructor
    {
        std::cout<<"\nNo arg constr called."<<std::endl;
    }

    Box(double len, double wid, double hei);//box with 3 dim
    Box(double );//cube
    Box (const Box& mybox);
    double volume();
    double getheight();
    double getwidth();
    double getlength();
    double setheight(double hei);
    double setwidth(double wid);
    double setlength(double len);
};

#endif // BOX2_H_
