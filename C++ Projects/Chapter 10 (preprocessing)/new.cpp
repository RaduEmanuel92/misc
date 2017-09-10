#include<stdio.h>


int main()
{


int i,j,k;
int m[][2][3]={1, 2, 3, 4, 5, 6,
               7, 8, 9,10,11,12,
               0, 0, 0, 0, 0, 0};

int *a=(int *)m[1];
*(--a)=2011;
*(++a)=2012;

for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		for(k=0;k<3;k++)
			printf("%d ", m[i][j][k]);


}
