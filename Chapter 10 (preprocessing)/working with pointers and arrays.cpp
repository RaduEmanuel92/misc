#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int f(int n)
{
    int i,s;
    if(n<=1)
        return 2;

s=0;
  for(i=1;i<n;i++)
   {s+= f(i)+f(n-i);
    cout<<"test "<<i<<" "<<n<<endl;
    }
}

int main()
{
printf("\n %d \n", f(4)+1);
}

