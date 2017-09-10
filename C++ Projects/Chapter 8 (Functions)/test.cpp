/*3.	Să se declarare o structură S care conţine,
ca membri, un şir de caractere şi un tablou de 5
elemente pointeri la o funcţie care primeşte ca
parametri un pointer la caracter şi un întreg şi
returnează un pointer la întreg. Cum se face apelul
primei funcţii din tablou? */

#include<iostream>
#include<string.h>

using namespace std;

int* x{nullptr};


int* pcall(const char* ch, int n);
struct Test{
            char array_char[10];
            int* (*p_array[5])(const char* , int );
            } test1;



int main()
{
    cout<<"Input char: ";
    cin>>test1.array_char;


    test1.p_array[1] = pcall;
    test1.p_array[1](test1.array_char, 1);
    cout<<test1.array_char<<endl;

}
//function

int* pcall(const char* ch, int n)
{

    cout<<"Inside: "<<test1.array_char<<endl;
    return x;

}
