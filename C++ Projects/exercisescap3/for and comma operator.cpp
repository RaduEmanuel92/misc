// Exercise 6-1. Write a program that declares and initializes an array with the first 50 even
//numbers. Output the numbers from the array ten to a line using pointer notation, and then
//output them in reverse order also using pointer notation.

#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;

int main()
{
    int a{3}, b{4}, c{5};
    int i{2};
    cout<<( a+= ++i , b+=++i, c+=++i ) <<endl;


 // calculate sum and fact of all int values up until a given n in a single for statement
          size_t n {};
          cout<<"Enter the limit:\t";
          cin>>n;
        for(unsigned long long i {1} , s{0ull} , fact{1ull};s+=i, fact*=i,  i<=n;i++)
       {
         cout<<"sum= "<<setw(15)<<s<<"    "<<"Factorial= "<<setw(15)<<fact<<endl;


       }



  }




