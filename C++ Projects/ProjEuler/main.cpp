#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;

int main()
{
    char a{'a'}, b, c, d;
    int i{0};
    int prod, prodmax{1};

    ifstream myfile("D:\data1.txt", ios::in);
    if(!myfile)
    {
        cout << "Cannot open file for input.\n";
        return 1;
    }

    char my_character ;
    int number_of_lines = 0;

	while (!myfile.eof() ) {

	myfile.get(my_character);
	cout << my_character;
		if (my_character == '\n'){
			++number_of_lines;
		}
	}
cout << "NUMBER OF LINES: " << number_of_lines << endl;
}
