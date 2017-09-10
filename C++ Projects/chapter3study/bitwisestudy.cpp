// Exercise 3-1. Create a program that prompts for input of an integer and store it as a
//type unsigned int. Invert all the bits in the value and store the result. Output the original
//value, the value with the bits inverted, and the inverted value plus 1, each in hexadecimal
//representation on one line, and in decimal representation on the line below. The output values
//on the two lines should be right aligned in a suitable field width, hexadecimal values should
//have leading zeroes so 8 hexadecimal digits always appear. Corresponding values on the two
//output lines should align.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    unsigned int val{0}
    cout<<dec<<setfill('0');
    cout<<"Introd val: \t";
    cin>>val;


    return 0;
}
