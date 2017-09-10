#include<iostream>
#include "print_f.h"
#include "print_this.h"
#include "print_that.h"

#include<string.h>

using namespace std;

void print_f(const string& s)
{
    cout<<endl<<s<<endl;
}

void print_this(const string& s)
{
    print_f(s);
}

void print_that(const string& s)
{
    print_f(s);
}

int main()
{
    string txt;
    cout<<"Introduceti text: ";
    getline(cin, txt);

    print_this(txt);
    print_that(txt);

}
