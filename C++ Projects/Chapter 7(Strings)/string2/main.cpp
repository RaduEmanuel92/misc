#include <iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<memory>

using namespace std;

//exercise 7_1

int main()
{
    vector<string> names;
    vector<double> grades;

    char answer{'y'};
    string name;
    double grade;
    double entry{0};
    double sum{0.0};

    do
    {
        cout<<"\n Entry "<<(++entry);
        cout<<"\nInput the name of the student and type # to mark the end of name :\n";
        getline(cin, name, '#');
        names.push_back(name);

         cout<<"\n Input the grade of the student and press Enter :\n";
        cin>>grade;
        sum+=grade;
        grades.push_back(grade);

        cout<<"\n Do you want to add another entry? (y/n) ";
        cin>>answer;
    }while(tolower(answer) == 'y');

    cout<<"\n Average grade : "<<sum/entry;

    cout<<"\n Your entries:\n";

    for(size_t i {};i<names.size();i++)
    {
        cout<<setw(20)<<names[i]<<setw(4)<<grades[i];

        if(i%3 ==0) cout<<endl;

    }






    return 0;
}
