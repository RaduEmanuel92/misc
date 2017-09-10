#include<iostream>

using namespace std;
//defining a class constructor

//class representing a box

class Box
    {
    private:
        double length_box {1.0};
        double width_box {1.0};
        double height_box {1.0};
    public:
        //constructor default
        Box(){};
        //constructor
        Box(double len, double wid, double height)
        {
            cout<<endl<<"Box object created.";
            length_box = len;
            width_box = wid;
            height_box = height;
        }
        //function to calculate volume of a box

        double volume ()
          {
              return length_box* width_box*height_box;
          }
    };

    int main()
    {
        Box mybox {2, 3, 4};
        double myvol {mybox.volume()};
        cout<<endl<<"Created box volume is: "<<myvol<<endl;

    }
