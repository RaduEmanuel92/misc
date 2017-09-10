#include<iostream>
#include<stdio.h>
using namespace std;


void f2(int *a, int *n)
{
	int i;
	printf("n = ");
	scanf("%d", n);
	for(i=0; i<*n; i++)
	{
		printf("a(%d) = ", i);
		scanf("%d", a+i);
	}
}
void afisareVector(int *a, int *n)
{
    int i;
    for(i=0; i<*n; i++)
    {
        printf("%3d ", *(a+i));
    }
}

int main(void)
{
	int a[10], n = 0;
	f2(a,&n);
	printf("Vectorul are %d elemente\n", n);
	afisareVector(a,&n);
	return 0;
}
