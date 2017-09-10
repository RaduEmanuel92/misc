// Exercise 6-1. Write a program that declares and initializes an array with the first 50 even
//numbers. Output the numbers from the array ten to a line using pointer notation, and then
//output them in reverse order also using pointer notation.

#include <iostream>
#include <iomanip>
#include <array>


using namespace std;

int main()
{
    int vect[50];

for(size_t i {}; i<50;i++)
 {
     vect[i]=2*i;

 }

 for(size_t i {}; i<50;i++)
 {cout<<setw(4)<<*(vect+i)<<" ";
  if( (i+1)%10 == 0)
    cout<<endl;

 }
 cout<<endl;

 for(size_t i {}; i<50;i++)
 {cout<<setw(4)<<*(vect+49-i)<<" ";
  if( (i+1)%10 == 0)
    cout<<endl;

 }



    return 0;
  }




