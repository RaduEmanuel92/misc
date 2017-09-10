#include<iostream>
#include<fstream>

using namespace std;
int main()

{
    ifstream myfile("data.in", ios::in);
    char a;
    int buff,v[1024];
   long long prod{1}, prodmax{1};
    int k{0};

    if(!myfile)
    {
        cout << "Cannot open file for input.\n";
        return 1;
    }

	while (!myfile.eof())
    {
        a = myfile.get();
        buff = a-48 ;
        v[k] = buff;
        ++k;
	}
	cout<<endl;


    for(int i{0};i<=1008;i++)
        {
        for(int j=i;j<=i+12;j++)
        {
            prod = prod*v[j];
        }

        if (prodmax < prod)
            {
                prodmax = prod;
                cout<<endl<<"Current maxprod: "<<prodmax<<"  "<<v[i]<<v[i+1]<<v[i+2]<<endl;
            }

        prod = 1;
        }

cout << "\nMax prod: " << prodmax << endl;

}

