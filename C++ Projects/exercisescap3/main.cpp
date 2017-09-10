//exercise 4.5

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{   float ammount{0.0};
    cout<<"Input the sum: "<<endl;
    cin>>ammount;

    if(ammount<0||ammount>10)
        {
            cout<<"Input a sum between 0$ and 10$. "<<endl;
            cin>>ammount;
        }
        ammount=ammount*100; //cents

//initialize the coins
  float quarters{0.0}, dimes{0.0}, nickels{0.0}, pennies{0.0};

   quarters=int(ammount/25);
   dimes=100*((ammount/25)-int(ammount/25));

   nickels=100*((dimes/10)-int(dimes/10));
   dimes=int(dimes/10);

   pennies=100*((nickels/5)-int(nickels/5));
   nickels=int(nickels/5);

   cout<<"The sum, calculated in coins, is: ";

  if(quarters==1)
     cout<<quarters<<" quarter  ";
     else
     cout<<quarters<<" quarters   ";

  if(dimes==1)
    cout<<dimes<<" dime  ";
    else
    cout<<dimes<<" dimes  ";

    if(nickels==1)
    cout<<nickels<<" nickel  ";
    else
    cout<<nickels<<" nickels  ";

    if(pennies==1)
    cout<<pennies<<" penny.";
    else
    cout<<pennies<<" pennies.";


    return 0;
}
