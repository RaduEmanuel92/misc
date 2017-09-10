//Exercise 6-3. Repeat the calculation in Exercise 6-2 but using a vector<> container allocated
//in the free store. Test the program with more than 100,000 elements. Do you notice anything
//interesting about the result?

#include <iostream>
#include <iomanip>
#include <cmath>
#include<vector>
#include<memory>
using namespace std;

int main()
{
    int asize{}; //array size
    cout<<"Enter array size:\t";
    cin>>asize;

  auto vect = make_shared<vector<double>>(); // dynamic allocation of an array type vector<T>, in heap and a shared pointer which points to its location


double s {0.0}, t {0.0};
  for(size_t i {0}; i<asize; i++)
   {  t = 1.0/(pow((i+1),2));
      vect->push_back(t);
      cout<<setw(16)<<t<<"   ";
      s+=t;

      if((i+1)%4==0)
         cout<<endl;

   }

 cout<<"\nResult is:\t"<<sqrt(s*6);




    return 0;
}




