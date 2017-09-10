#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double vect[5]{9,8,7,6,5};

    cout<<vect<<endl;
    double *pvect{vect};

    cout<<vect[0]<<" "<<vect[1]<<endl;
    cout<<pvect<<" "
    <<&pvect<<" "<<&pvect[1]<<" "
    <<*pvect<<" "
    <<pvect[1];

cout<<endl;
cout<<endl;
cout<<pvect+1<<" "<<*pvect+2<<" "<<*(pvect+3)<<endl;
cout<<pvect++<<" "<<++pvect<<" "<<*(++pvect)<<endl;
cout<<*(&pvect[5]+2)<<endl;
cout<<++pvect<<" "<<++pvect<<++pvect<<" "<<++pvect<<" "<<++pvect<<" ";


    return 0;

}
