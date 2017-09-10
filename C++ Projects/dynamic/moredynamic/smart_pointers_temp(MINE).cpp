// Ex6_06.cpp
// Using smart pointers
#include <iostream>
#include <iomanip>
#include <memory> // For smart pointers
#include <vector> // For vector container
#include <locale> // For toupper()

using namespace std;

int main()
{

  vector <shared_ptr<vector<double>>>records;  //temperature records by day (unknown number of values)
  size_t day{1}; //day number
  char answer{}; //response to promt
  double t{};     // a temperature

  while(true)
  {
    //create vector to store current day's temps in heap
    auto pDay= make_shared<vector<double>>();
    records.push_back(pDay); // save pointer in records vector
    cout<<"Enter the temperatures for day "<<day++
        <<" separated by spaces. enter 1000 to end: \n";
     while(true)
     {  //get temps for current day
         cin>>t;
         if(t == 1000.0) break;
         pDay->push_back(t);
     }
     cout<<"Enter another day's temperatures (Y OR N)? ";
     cin>>answer;
     if(toupper(answer) == 'N') break;
  }

    double total{};
    size_t nr{};
    day = 1;
    cout<<fixed<<setprecision(2)<<endl;

    for(auto record: records)
    {
        cout<<"\nTemperatures for day "<<day++<<":\n";
        for(auto temp: *record)
        {
            total+=temp;
            cout<<setw(10)<<temp;
            if(++nr%5==0) cout<<endl;
        }
        cout<<"\nAverage temperature: "<<total/nr<<endl;
        total=0.0;
        nr=0;
    }



  }




