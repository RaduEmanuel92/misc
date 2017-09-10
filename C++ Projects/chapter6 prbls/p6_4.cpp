//Exercise 6-4. You know that a two-dimensional array is an “array of arrays.” You also know
//that you can create an array dynamically using a pointer. If the elements of the array that you
//create dynamically are also pointers, then each element in the array could store the address
//of an array. Using this concept, create an array of three pointers to arrays, in which each
//array can store six values of type int. Set the first array of integers to values 1 to 6, the next
//array to the squares (N×N) of the values stored first array, and the next the cubes (N×N×N) of
//the values stored in the first array of integers. Output the contents of the three arrays, and
//then delete the memory you’ve allocated.

#include <iostream>
#include <iomanip>
#include <vector>
#include <memory>
#include<cmath>

using namespace std;

int main()
{
  vector<shared_ptr<vector<unsigned int>>>basearray ; //allocate in heap an array
  auto first = make_shared<vector<unsigned int>> (); // create vector to store first n integers
  basearray.push_back(first);// ..and put the pointer to the array in first array

  auto second = make_shared<vector<unsigned int>> ();// create second vector to store first n squares
  basearray.push_back(second);//..and put the pointer to the array in first array

  auto third = make_shared<vector<unsigned int>> ();// create third vector to store the cubes
  basearray.push_back(third);// ..and put the pointer to the array in first array


  size_t n {} ; //nr elemente

  cout<<"Enter number of values to populate the array:\t";
  cin>>n;

  for(size_t i {1}, sq {}, cube {} ; sq=pow(i,2),cube=pow(i,3), i<=n; i++)
    {
        first-> push_back(i);
        cout<<setw(10)<<i<<"     ";
        second->push_back(sq);
        cout<<setw(10)<<sq<<"     ";
        third->push_back(cube);
        cout<<setw(10)<<cube<<"     ";
        cout<<endl;
    }


    return 0;



}




