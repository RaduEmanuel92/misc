#include <stdio.h>
#include<iostream>
#include<bitset>
using   namespace std;
int main (void)
{
  int a=6,b=-6;
printf("\n %d %d %d \n" ,a,a^a,a^~a);
int p;
cout<<bitset<8>(a)<<endl;
cout<<bitset<8>(~a)<<endl;
cout<<bitset<8>(b)<<endl;
cout<<bitset<8>(~b)<<endl;
cout<<bitset<8>(a^a)<<endl;
cout<<~a<<" ";
cout<<bitset<8>(~a)<<endl;
cout<<bitset<8>(a^~a)<<endl;
a=a>>2;
p=a;

cout<<bitset<8>(p)<<endl;


}
