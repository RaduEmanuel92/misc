//overloading a function

#include <stdio.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;
double largest(const double data[], size_t nr);
double largest(const vector<double>& data);
int largest(const vector<int>& data);
string largest(const vector<string>& words);

int main()
{
    int values[] {1.5, 44.6, 13.7, 21.2, 6.7};
    vector<int> numbers {15, 44, 13, 21, 6, 8, 5, 2};
    vector<double> data {3.5, 5, 6, -1.2, 8.7, 6.4};
    vector<string> names {"Charles Dickens", "Emily Bronte", "Jane Austen",
                          "Henry James", "Arthur Miller"};


cout<<"The largest of value is: "<<largest(values, sizeof(values)/sizeof(values[0]));
cout<<"\nThe largest number is: "<<largest(numbers)<<endl;
cout<<"The largest of data is :"<<largest(data)<<endl;
cout<<"The largest of names is :"<<largest(names)<<endl;
}

// finds the largest of an array of double values

double largest( const double data[], size_t nr)
{
    size_t index_max;

    for(size_t i{0} ; i<nr ; ++i)
        if(data[index_max]<data[i])
        index_max=i;

    return data[index_max];
}

//finds the largest of a vector of double values

double largest(const vector<double>& data)
{   double maxm{data[0]};
        for(auto value:data)
        if(maxm<value) maxm=value;

    return maxm;

}

//finds the largest of a vector of int values

int largest(const vector<int>& data)
{   int maxm{data[0]};
        for(auto value:data)
        if(maxm<value) maxm=value;

    return maxm;

}

//finds the largest of a vector of string vals

string largest(const vector<string>& words)
{
        string maxw{words[0]};
        for(auto& w : words)
         if(maxw < w) maxw = w;

    return maxw;

}
