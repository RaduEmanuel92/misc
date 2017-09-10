#include<iostream>
#include<string>
#include<iomanip>

#include<vector>

using namespace std;

//store names, sort alphabetically ;output
// the largest name and 5 by line

int main()
{
    vector<string> names; //vector of names
    string input_name ;  // stores a name
    char answer {}; //response to a prompt

    do
    {
        cout<<"Enter a name: ";
        cin>>input_name;
        names.push_back(input_name);

        cout << "\nDo you want to enter another name? (y/n): ";
        cin >> answer;

    }   while(tolower(answer)=='y');

  //sort names alphabetically
cout<<"test"<<endl;

  string temp;
  bool sorted{false};

  while(!sorted)
  {
      sorted=true;

      for(size_t i {1}; i< names.size();i++)
        {
            if(names[i-1] > names[i])
            {
                temp=names[i];
                names[i]= names[i-1];
                names[i-1]=temp;
                sorted=false;
            }
        }
  }

//Find the length of the longest name

size_t max_length{};
for(auto& name: names)

    if(max_length < name.length()) max_length= name.length();

// output the sorted names 5 to a line

cout<<"\nIn ascending sequence, the names you entered are : \n";

size_t field_width = max_length+5;
size_t nr {};

for(auto& name : names)
{
    cout<<setw(field_width) << name;
    if(!(++nr % 5)) cout<<endl;

}

cout<<endl;
   return 0;

}
