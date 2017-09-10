//Exercise 5-5. Write a program that will read and store an arbitrary sequence of records
//relating to products. Each record includes three items of data - an integer product number, a
//quantity, and a unit price, such as for product number 1001 the quantity is 25, and the unit
//price is $9.95. The program should output each product on a separate line and include the
//total cost. The last line should output the total cost for all products. Columns should align so
//output should be something like this:

#include <iostream>
#include <iomanip>
#include <array> // For array<T,N>
using namespace std;

int main()


{
    int nr{};
    float matrix[nr][3];


    cout<<"Input number of records:\t";
    cin>>nr;
    cout<<endl;

    for(int i=0;i<nr;i++)
    {
            cout<<"\nInput the product Id for product: "<<i<<": ";
            cin>>matrix[i][0];

            cout<<"\nInput the quantity of the product: "<<i<<": ";
            cin>>matrix[i][1];

            cout<<"\nInput the unit price of the product: "<<i<<": ";
            cin>>matrix[i][2];

            cout<<endl;
    }

    for(int i=0;i<nr;i++)
    {
        for(int j=0;j<3;j++)
        cout<<matrix[i][j]<<" ";

       cout<<endl;
    }


    for(int i=0;i<=51;i++)
        cout<<"_";
        cout<<endl;


    cout<<setw(9)<<"Product "<<setw(4)<<"|"<<setw(9)<<"Quantity "
        <<setw(4)<<"|"<<setw(9)<<"Unit price"<<setw(5)<<"|"
        <<setw(8)<<"Cost"<<setw(3)<<"|";
    cout<<endl;

    for(int i=0;i<=51;i++)
        cout<<"_";
        cout<<endl;

cout<<dec;

    for(int i=0;i<nr;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<setw(9)<<matrix[i][j]<<setw(4)<<"|";
            if(j==2)
               cout<<setw(9)<<matrix[i][j] * matrix[i][j-1]<<setw(4)<<"|";

        }

        cout<<endl;

    }


return 0;
}
