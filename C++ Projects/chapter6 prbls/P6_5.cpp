//Exercise 6-5. Write a program that will read an arbitrary number of age values in years for
//students in each of an arbitrary number of classes. The number of ages is not known in
//advance but there can be up to 50 students in a class. Store the student age values for each
//class in an vector<T> container that you create in the free store. A shared_ptr<T> for each
//vector<T> should be stored in a vector<T> that is also created in the free store. After input
//is complete, list the ages of students in each class, 5 to a line, followed by the average age
//for the class.

#include <iostream>
#include <iomanip>
#include <vector>
#include <memory>
#include<locale>

using namespace std;

int main()
{   //array of classes created in heap pointed to by a smart shared ptr

    vector<shared_ptr<vector<int>>> classes;

    size_t age {}, nr_cls{1};
    char answer {};

    while(true)
    {
        auto ages = make_shared<vector<int>> (); // create a a vector to an array in heap
        classes.push_back(ages);  //save pointer in vector

        cout<<"Input the student's ages for the class "<<nr_cls++<<" , separated by spaces and type 100 when you finished: "
            <<"\n(Note! (1) There cannot be more than 50 stds in a class! if you enter more than 50 values, only the first 50 will be collected ! )"
            <<"\n       (2) Maximum age allowed is 20;"<<endl;

            size_t i{1};

            while(i<50)
            {
                cin>> age;
                if(age == 100) break;
                if(age>20)
                    while(age<=20)
                    {cout<<"\n Input a proper age, with respect to the conditions imposed : "<<endl;
                     cin>>age;
                    }
                ages->push_back(age);

            }

          cout<<"\n Do you want to input another age set for another class? (Y/N)";
          cin>>answer;



          if(tolower(answer)=='n') break;

    }

    // output the ages and average age for each class

    int nr {0}, totalage {};
    nr_cls = 1;


    for(auto cl :classes )
    {
       cout<<"Ages for class "<< (nr_cls++) <<" are:\n";

        for(auto ag : *cl)
        {
            totalage+=ag;
            cout<<setw(4)<<ag<<" ";
            if((nr++)%5 == 0)
                cout<<endl;
        }

        cout<<"\nAverage age for this class is: "<<totalage/nr<<endl;

    }




    return 0;



}




