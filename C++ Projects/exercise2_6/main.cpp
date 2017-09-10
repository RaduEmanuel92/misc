#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  double weight{0}, feet{0}, inches{0};
  double bmi{0}, height{0};
  const double kgperlbs{2.2};
  const double feetpermeter{0.3048};
  const double inchesperfoot{12};
  //data input
  cout<<"Introduce the weight in pounds: "<<endl;
  cin>>weight;
  cout<<endl;
  cout<<"Introduce the height in feet and inches separated by spaces: "<<endl;
    cin>>feet>>inches;
       //conversion
weight=weight/kgperlbs;
feet=feet+ inches/inchesperfoot;
height=feet*feetpermeter;

cout<<"Output: "<<endl;

  cout<<"Weight (kg): "<<weight<<endl;
  cout<<"Height(meters) : "<<height<<endl;
  cout<<"BMI is: "<< weight/pow(height,2)<<endl;

}
