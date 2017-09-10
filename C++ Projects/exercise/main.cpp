
#include<limits>
#include <iostream>

using namespace std;

int main()
{
 double height{7};

   cout<<"The variable occupies "<<sizeof(height)
   <<" bytes"<<endl;
    cout<<"The fraction height*height/2 occupies "<<sizeof(height*height/2)
   <<" bytes"<<endl;
   cout<< height*height/2;
   //use static cast in a sequence

   double x{3.9D};
   cout<<"Conversion valid? :"<<static_cast<unsigned int>(x+2.5)
        <<endl;
    cout<<"Isolate the integer: "<<static_cast<unsigned int>(x)
        <<endl<<endl;

// finding the limits, bithces!
 cout<<"Maximum storage capability for float is: \t"<<numeric_limits<float>::max()
    <<endl;
     cout<<"Maximum storage capability for double is from: \t"<<numeric_limits<double>::min()
        <<"to "<<numeric_limits<double>::max()<<endl;

cout<<"Mantissa checking float: "<<numeric_limits<float>::digits<<endl;
cout<<"Mantissa checking double: "<<numeric_limits<double>::digits<<endl;
cout<<"Mantissa checking int: "<<numeric_limits<int>::digits<<endl;
cout<<"Mantissa checking CHAR: "<<numeric_limits<char>::digits<<endl;
     cout<<"Maximum storage capability for char is from: \t"<<(numeric_limits<char>::min())
        <<"to "<<numeric_limits<char>::max()<<endl;

// character variables study

char letter;
cout<<"Junk value: "<<letter<<endl;
char ch{65};
cout<<"Letter: "<<static_cast<char>(ch+1)<<endl;

cout<<" Ch is '"<<ch<<"'which is code "<<hex<<showbase
                    <<static_cast<int>(ch)<<endl;
cout<<ch+2;




}

