/*Exercise 8-1. Write a function, validate_input(), that accepts two integer arguments that
represent the upper and lower limits for an integer that is to be entered. It should accept
a third argument that is a string describing the input, the string being used in the prompt
for input to be entered. The function should prompt for input of the value within the range
specified by the first two arguments and include the string identifying the type of value to be
entered. The function should check the input and continue to prompt for input until the value
entered by the user is valid. Use the validate_input() function in a program that obtains a
user’s date of birth and outputs it in the form of this example:
November 21, 2012
The program should be implemented so that separate functions, month(), year(), and day()
manage the input of the corresponding numerical values. Don’t forget leap years -
February 29, 2013 is not allowed! */

#include<iostream>
#include<iomanip>

using namespace std;

int validate_input(int low_val, int up_val, string type_var); // limits to a interval

int month();
int year();
int day(int year_b, int month_b);

int main()
{
   cout<<"Date of birth application\n";
   int year_birth{year()};
   int month_birth{month()};
   int day_birth{day(year_birth, month_birth)};

   string months[] {
                    "Jan", "Feb", "Mar", "Apr", "May", "June",
                    "July", "Aug", "Sep", "Oct", "Nov", "Dec"
                   };

   cout<<endl;
   cout<<"Your date of birth is: "<<day_birth<<" "<<months[month_birth-1]<<", "<<year_birth;




}

int validate_input(int low_val, int up_val, string desc)
{
    int val{0};
    cout<<"Please enter a "<<desc<<" from "<<low_val<<" to "<<up_val<<" : ";
    cin>>val;
    while( (val<low_val) || (val>up_val))
        {
            cout<<"\nInput error! "<<"Please enter a "<<desc<<" from "<<low_val<<" to "<<up_val<<" : ";
            cin>>val;
            cout<<endl;
        }
        return val;

}

int month()
{
    int low{1};
    int up{12};
    return validate_input(low, up, "a month");

}
int year()
{
    int low{1950};
    int up{2010};
    return validate_input(low, up, "a year");
}

int day(int year_b, int month_b)
{
    int low{1};
    int up{31};
    return validate_input(low, up, "a day");

}
