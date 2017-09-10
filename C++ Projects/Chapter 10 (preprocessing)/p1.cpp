#include<iostream>
#include<string>
#include "p1.h"

using namespace std;

Date_birth mydate;//global var

void citire() //read struct
{
    cout<<"Introduceti anul nasterii (1950-2010): ";
    cin>>mydate.an;
    cout<<"\nIntroduceti luna nasterii(1-12): ";
    cin>>mydate.luna;
    cout<<"\nIntroduceti ziua nasterii(1-31): ";
    cin>>mydate.zi;
}
void output_s() //output struct
{
    cout<<endl;
    cout<<"V-ati nascut pe data: "<<"\""<<mydate.zi<<"//"<<mydate.luna<<"//"<<mydate.an<<"\"";

}


int main()
{
    citire();
    output_s();

}

