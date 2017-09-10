/* 1.Să se definească un vector de pointeri la
funcţii care primesc ca parametri un număr real
 şi returnează un număr real. Tabloul este iniţializat
 cu adresele funcţiilor g1, g2, g3. Să se scrie
 secvenţa de cod care citeşte un real de la tastatură
 şi afişează valorile corespunzătoare ale celor 3
 funcţii, folosind tabloul de pointeri. */
#include<stdio.h>
#include<iostream>
using namespace std;

void swapp (double *a1, double *a2)
{
    double auxv;
    double* aux{&auxv};
    *aux = *a1;
    *a1 = *a2;
    *a2 = *aux;


}
int main()
{
    double a, b;


    cout<<"input a ";cin>>a;
    cout<<"address is: "<<&a;
    cout<<"\ninput b ";cin>>b;
    cout<<"address is: "<<&b;
    cout<<endl;
    swapp(&a,&b);
    cout<<a<<" "<<b;



}
