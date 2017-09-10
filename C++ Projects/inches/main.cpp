// convert a distance in inches to yards, feet and inches
#include <iostream>

using namespace std;

int main()
{
    const unsigned int inchperfoot{12U};
    const unsigned int feetperyard{3U};
    unsigned int totalinch{};
    unsigned int yards{}, feet{}, inches{};

cout<<"Enter a distance in inches: \t";
cin>> totalinch;
inches= totalinch%inchperfoot;
feet=(totalinch/inchperfoot)%feetperyard;
yards=(totalinch/inchperfoot)/feetperyard;

cout<<"The distance corresponds to \t"
                    <<yards<<" yards  "
                    <<feet<<" feet  "
                    <<inches<<" inches"<<endl;

}
