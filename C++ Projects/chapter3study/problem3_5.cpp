//Exercise 3-5. Write a program that prompts for two integer values to be entered and store
//them in integer variables, a and b say. Swap the values of a and b without using a third
//variable. Output the values of a and b.
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{ //variables
    int a{0000}, b{0000};

cout<<"Enter the values separated y spaces and press ENTER:"
cout<<endl;
cin>>a>>b;

cout<<hex<<setfill('0');
cout<<showbase;
cout<<a<<" "<<b;



    return 0;

}
