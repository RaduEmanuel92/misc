//Exercise 6-2. Write a program that reads an array size from the keyboard and dynamically
//allocates an array of that size to hold floating-point values. Using pointer notation, initialize
//all the elements of the array so that the value of the element at index position n is 1.0/(n+1)^2.
//Calculate the sum of the elements using pointer notation, multiply the sum by 6, and output
//the square root of that result.

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main()
{
    int asize{10}; //array size
    cout<<"Enter array size:\t";
    cin>>asize;

    double* vect(new double[asize]); // dynamic allocation of an array on the heap
    double s {0.0};
   cout<<endl<<sizeof(vect)/sizeof(*vect)<<endl;
    for(size_t i {}; i<asize;i++)
     {
         *(vect+i)= 1.0/(pow((i+1),2));
         cout<<setw(16)<<*(vect+i)<<"   ";
         s+=(*(vect+i));

         if((i+1)%4==0)
            cout<<endl;
     }

  cout<<"\nResult is:\t"<<sqrt(s*6);

delete[] vect;
vect=nullptr;



    return 0;
}




