#include<iostream>
#include<fstream>
#include<math.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
    ifstream myfile("data.in", ios::in);
    long long int s{0};
    char a;
    int nrs[50][100],m;
    size_t k{0}, j{0};

    if(!myfile)
        cout<<" Cannot open the file. "<<endl;

    while(!myfile.eof())
    {
        a = myfile.get();
        m = a-48;
        nrs[k][j++] = m;
        if(j==51)
        {
            k++;
            j=0;
        }
    }

cout<<"\nStart.\n";

cout<<nrs[0][0]<<" "<<nrs[0][50]<<" "<<nrs[1][50]<<endl;
cout<<"Reading complete.\n";



}
