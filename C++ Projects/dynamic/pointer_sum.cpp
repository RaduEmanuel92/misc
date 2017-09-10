#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

int p_test (int a, int * b)
{
	int d=0, *c;
	c = &a;
	cout<<a<< " "<<*b<< " "<<*c<< " "<<d<< " "<<endl<<endl;
	*c = *b+4;
	cout<<a<< " "<<*b<< " "<<*c<< " "<<d<< " "<<endl<<endl;
	*b = a+*c;
	cout<<a<< " "<<*b<< " "<<*c<< " "<<d<< " "<<endl<<endl;
	d = *c**b;
	cout<<a<< " "<<*b<< " "<<*c<< " "<<d<< " "<<endl<<endl;
	a = *c + 4;
	cout<<a<< " "<<*b<< " "<<*c<< " "<<d<< " "<<endl<<endl;
	return d;

}
	int main (void)
{
	int a=1, b=2, c=3, d=4;
	b = p_test (a, &c);
	printf ("%d %d %d %d", a, b, c, d);
	return 0;
}

