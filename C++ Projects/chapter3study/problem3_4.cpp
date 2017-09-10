
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{ //variables

    char ch1,ch2,ch3,ch4;
    unsigned int stock{0X00000000};

    cout<<"Read char by char with space within;"<<endl;
    cin>>ch1>>ch2>>ch3>>ch4;
    cout<<endl<<endl;

    cout<< int(ch1)<<" "<< int(ch2)<<" "<< int(ch3)<<" "<< int(ch4);
    cout<<endl;


    cout<<showbase;
    cout<<hex;
    cout<<setfill('0');
    stock= stock| (int(ch1)<<24);
    cout<<stock<<endl;
    stock= stock| (int(ch2)<<16);
    cout<<stock<<endl;
    stock= stock| (int(ch3)<<8);
    cout<<stock<<endl;
    stock= stock| (int(ch4));

    cout<<stock;
    cout<<endl<<endl;
    //EXTRACT USING MASKS
    int mask1{0xff000000};
    int mask2{0x00ff0000};
    int mask3{0x0000ff00};
    int mask4{0x000000ff};
    int c1,c2,c3,c4;
    c1=mask4&stock;
    cout<<c1<<endl;

    c2=mask3&stock;
    c2=c2>>8;
    cout<<c2<<endl;

    c3=mask2&stock;
    c3=c3>>16;
    cout<<c3<<endl;

    c4=mask1&stock;
    c4=c4>>24;
    cout<<c4<<endl;



    return 0;

}
