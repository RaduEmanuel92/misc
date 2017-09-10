#include <iostream>
#include<iomanip>

using namespace std;

int main()
{    int limit{};
    //use for loop like a boss;
    cout<<"Input the limit:"<<endl;
    cin>>limit;

    cout<<endl;

    cout<<setw(8)<<"\n Number"<<setw(8)<<"Sum "<<setw(16)<<"Factorial "
        <<endl;

 for(unsigned long long i{1ULL}, sum{0ULL}, fat{1ULL}; sum+= i, fat*= i, i<=limit; ++i)
{
   cout<<sum<<setw(16);
   cout<<fat<<endl;

}



    return 0;



}
