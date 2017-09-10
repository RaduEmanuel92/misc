/*3.	Să se declarare o structură S care conţine,
ca membri, un şir de caractere şi un tablou de 5
elemente pointeri la o funcţie care primeşte ca
parametri un pointer la caracter şi un întreg şi
returnează un pointer la întreg. Cum se face apelul
primei funcţii din tablou? */

#include<iostream>
using namespace std;
#include<string.h>


int x=20;
int* pcall(const char* ch, int n);

struct Test_struct{
	char *array_char;
    int* (*p_array[5])(const char* ch, int n);
    }test1;



int main()
{
    cout<<"Get the fist: ";
    //cin>>test1.array_char;
    //cout<<test1.aracray_char<<endl;
	//test1 st;
	Test_struct st;
	char a[] = {"STFU"};
	st.array_char = a;
	st.p_array[1]=pcall;

	(st.p_array[1])(a,5);
	return 0;
}
//function

int* pcall(const char* ch, int n)
{
    cout<<ch<< "  " << n<<endl;
    return &x;
}
