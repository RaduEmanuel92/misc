#include<iostream>
#include<math.h>

using namespace std;
int main()

{
    for(int i{1}; i<1000; i++)
    for(int j{1}; j<1000; j++)
    for(int k{1}; k<1000; k++)
     if((pow(i,2) + pow(j,2)) == k*k)
      {
        cout<<"p: "<<i<<" "<<j<<" "<<k<<endl;
        if((i+j+k) == 1000)
        {
         cout<<i<<" "<<j<<" "<<k<<endl;
         break;
         break;
         break;
        }
    }




   return 0;

}

