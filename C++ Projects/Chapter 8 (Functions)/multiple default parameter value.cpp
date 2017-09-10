#include <stdio.h>
#include<iostream>
#include<string.h>
#include<iomanip>

using   namespace std;

//the function prototype including defaults for parameters
void show_data(const int data[], size_t nr=1, const string& title="Data Values",
               size_t width=10, size_t perline=5);

int main( )
{
    int samples[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int dataitem {99};
    show_data(&dataitem);

    dataitem = 13;
    show_data(&dataitem, 10, "Unlucky for some!");

    show_data(samples, sizeof(samples)/sizeof(samples[0]));
    show_data(samples, sizeof(samples)/sizeof(samples[0]), "Samples");
    show_data(samples, sizeof(samples)/sizeof(samples[0]), "Samples", 6);
    show_data(samples, sizeof(samples)/sizeof(samples[0]), "Samples", 8, 4);
}

void show_data(const int data[], size_t nr, const string& title,
              size_t width, size_t perline)
{
    cout<<title<<endl; // display title

    for(size_t i{0}; i< nr; ++i)
        {
            cout<<setw(width)<<data[i];
            if((i+1)%perline == 0)
                cout<<endl;
        }
    cout<<endl;
}
