#include <stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
char *text = "Testare";
char *TT = &text[3];
cout<<text<<endl;
cout<<*text<<endl;
cout<<&text<<endl<<endl;



cout<<TT<<endl;
cout<<*TT<<endl;
cout<<&TT<<endl;
int i;
for(i=0; *(TT+i) != '\0'; i += 1)
{
	printf("%s", &TT[i]);
}

return 0;
	}
