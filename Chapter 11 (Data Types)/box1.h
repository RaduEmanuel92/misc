#ifndef BOX1_H
#define BOX1_H

//build class
class Box
{
private:
    double length {1};
    double width {1};
    double height {1};
public:
    //constructor default- no arg
    Box();
    Box(double len, double wid, double hei );
    double volume();
};


#endif // BOX1_H
