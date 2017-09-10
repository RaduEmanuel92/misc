#include <iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
    vector<string>names;
    string name;
    char answer{};

    do
    {
        cout<<"Name: ";
        cin>>name;
        names.push_back(name);
        cout<<endl<<"Do you want to add another name? (y/n): ";
        cin>>answer;

    }
    while(tolower(answer) == 'y');

    //reading done, proceed with compare, bubble sort

    bool sorted{1};
    string aux;

    while(!sorted)
    {
        sorted=0;
        for(size_t i{0}; i<= names.size(); i++)
         if(names[i]>names[i+1])
         {
             aux= names[i];
             names[i]= names[i+1];
             names[i+1]=aux;
             sorted=1;
         }
    }

    //sorting done; find the biggest word length;

    int maxname{0};

    for(auto& t:names)
        if(maxname < t.length())
            maxname=t.length();

        //nice output
        size_t nr{0};
        for(auto n:names)
            {
                cout<<setw(maxname+5)<<n;
                ++nr;
                if(nr%5==0)
                    cout<<endl;
            }



   return 0;

}
