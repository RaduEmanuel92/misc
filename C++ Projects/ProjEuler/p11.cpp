#include<iostream>
#include<fstream>

using namespace std;
int main()

{
    ifstream myfile("data.in", ios::in);
    int a;
    int buff,v[20][20];
    long int prod[4]{1,1,1,1}, prodmax[4]{1,1,1,1};

    if(!myfile)
    {
        cout << "Cannot open file for input.\n";
        return 1;
    }


        for(int i{0}; i<20;i++)
        for(int j{0}; j<20;j++)
        {
        myfile>>a;
        if(a == EOF)
        {
            break;
            break;
        }
        cout<<a<<" ";
        v[i][j] = a;
        }

        //product horizontally & vertically

        for(int i{0}; i<17;i++)
        for(int j{0}; j<17;j++)
           {
             prod[0]=v[i][j]*v[i][j]*v[i][j+2]*v[i][j+3];
               if(prodmax[0] < prod[0])
                prodmax[0] = prod[0];
                prod[0]=1;

             prod[1]=v[i][j]*v[i+1][j]*v[i+2][j]*v[i+3][j];
              if(prodmax[1] < prod[1])
                prodmax[1] = prod[1];
                prod[1]=1;
           }

        //prod diagonally
        for(int i{0}; i<17;i++)
        for(int j{0}; j<17;j++)
            {
                prod[2]=v[i][j]*v[i+1][j+1]*v[i+2][j+2]*v[i+3][j+3];
                if(prodmax[2] < prod[2])
                prodmax[2] = prod[2];
                prod[2]=1;

                prod[3]=v[i+3][j]*v[i+2][j+1]*v[i+1][j+2]*v[i][j+3];
                if(prodmax[3] < prod[3])
                prodmax[3] = prod[3];
                prod[3]=1;

            }

cout<<endl<<prodmax[0]<<" "<<prodmax[1]<<" "<<prodmax[2]<<" "<<prodmax[3];

}

