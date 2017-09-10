
/*returning a pointer*/
#include <stdio.h>
#include<iostream>
#include<string.h>
#include<iomanip>

using   namespace std;

void show_data(const double data[], size_t nr=1, const string& title= "Data values",
               size_t width=10, size_t perline=5);
const double* largest(const double data[], size_t nr);
const double* smallest(const double data[], size_t nr);
double* shift_range(double data[], size_t nr, double delta);
double* scale_range(double data[], size_t nr, double divisor);
double* normalize_range(double data[], size_t nr);

int main()
{
    double samples[]{
                    11.0, 23.0, 13.0, 4.0,
                    57.0, 36.0, 317.0, 88.0,
                    9.0, 100.0, 121.0, 12.0
                    };

    const size_t nr{sizeof(samples)/sizeof(samples[0])};
    show_data(samples, nr, "Original Values");
    cout<<endl;
    show_data(shift_range(samples, nr, (-1)*(*smallest(samples, nr)) ), nr, "Shifted values");

    cout<<endl;
    show_data(normalize_range(samples, nr), nr, "Normalized Values", 12);


}

//Finds the largest of an array of double values
const double* largest(const double data[], size_t nr)
{
    size_t index_max{0};
    for(size_t i{1}; i<nr; ++i)
        if(data[index_max] < data[i])
        index_max = i;
    return &data[index_max];
}

//find the smallest of an array of double values
const double* smallest(const double data[], size_t nr)
{
    size_t index_min{0};
    for(size_t i{1}; i<nr; ++i)
        if(data[index_min] > data[i])
        index_min = i;
    return &data[index_min];
}
//Modify a range of value by delta

double* shift_range(double data[], size_t nr, double delta)
{

    for(size_t i{0} ; i<nr ; ++i)
        data[i] += delta;
    return data;
}

//Scale an array of values by divisor
double* scale_range(double data[], size_t nr, double divisor)
{
    if(!divisor)
        return data;

    for(size_t i{0} ; i<nr ; ++i)
        data[i] /= divisor;
    return data;

}

//Normalize an array of values: val [0,1]
double* normalize_range(double data[], size_t nr)
{
    return scale_range(shift_range(data, nr, (-1) * (*smallest(data, nr))),
                       nr, *largest(data, nr));
}

//Output an array of double variables

void show_data( const double data[], size_t nr, const string& title,
                size_t width, size_t perline)
{
    cout<<title<<endl;

 for(size_t i{0} ; i<nr ; ++i)
    {
        cout<<setw(width)<<data[i];
        if( !((i+1) % perline))
            cout<<endl;

    }
    cout<<endl;
}

