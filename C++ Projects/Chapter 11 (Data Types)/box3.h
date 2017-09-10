#ifndef BOX3_H
#define BOX3_H
// class header

class Box
{
private:
    double height{1};
    double width{1};
    double length{1};
public:
    Box(); //no arg constructor
    Box(double len, double wid, double hei);//box with 3 dim
    Box(double len);//cube
    Box (const Box& mybox);
    double volume();
    friend double lateral_surface (const Box& box);
    ~Box()
    {
        std::cout<<"\n Destructor no arg called.";
    }


};


#endif // BOX3_H
