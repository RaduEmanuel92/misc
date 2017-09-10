#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int unit_price{295}; //price in cents

    int numb{};
    int disQ{25}; //quantity treshhold for discount
    double discount{0.07};

    int *pcount{&numb}; //pointer to count
    cout<<"Enter the number of items you want:\t";
    cin>>*pcount;
    cout<<"The unit price is "<<fixed<<setprecision(2)
    <<"$"<<unit_price/100.00<<endl;

// calculate gross price
 int *punit_price{&unit_price};
 int price{*pcount * *punit_price};
 int *pprice{&price};
cout<<"*punit_price: "<<*punit_price<<endl;
cout<<"unit_price: "<<unit_price<<endl;
cout<<"punit_price: "<<punit_price<<endl;
cout<<"&punit_price: "<<&punit_price<<endl;
cout<<"*punit_price: "<<*punit_price+3<<endl;
cout<<"punit_price: "<<punit_price+3<<endl;


    // calculate net price in US$
 double net_price{};
 double* pnet_price{nullptr};
 pnet_price=&net_price;

  if(*pcount>disQ)
  {
        cout<<"You qualify for a discount of "
            <<static_cast<int>(discount*100.0)<<" percent.\n";
        *pnet_price=price*(1.0-discount)/100;

  }
   else
   {
       net_price=*pprice/100.0;

   }

    cout<<"The net price for "<<*pcount<<" products in US$ IS: "
        <<net_price<<endl;


    return 0;


}
