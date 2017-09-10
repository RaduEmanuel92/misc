#include<iostream>
#include<math.h>
using namespace std;

int is_palind(int a)
{
    int s{0},a1{0},t{a};
    while(a!=0)
    {
        s=a%10;
        a/=10;
        a1=a1*10+s;
    }

    if(a1==t)
    return 1;

}

int main()
{
    int old{0};
    for(int i {999}; i>=100;i--)
     for(int j {999}; j>=100;j--)
     if((is_palind(i*j)) == 1)
     {
         if(old < i*j)
           old=i*j;
     }

     cout<<"\nPalindrome found! "<<old;
}
