#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    const char* pstars[] {
                            "Fatty Arbuckle", "Clara Bow",
                            "Lassie", "Slim Pickens",
                            "Boris Karloff", "Mae West",
                            "Oliver Hardy", "Greta Garbo"
                        };

const char sqtars[] [10]{
                    "Fatty Arbucklea", "Clara Bowt",
                    "Lassies", "Slim Pickenst",
                    "Boris Karloffs", "Mae Wests",
                    "Arnold  Schwartzenegeras", "Greta Garbov"
                    };

 int nr{30};
const int* pnr{&nr};

cout<<nr<<endl;
nr=25;

cout<<*pnr<<endl
    <<pnr<<endl
    <<&nr<<endl
    <<&pnr<<endl;


cout<<*pstars<<endl;
cout<<pstars<<endl;
cout<<&pstars<<endl;
cout<<&pstars[0]<<endl;
cout<<&pstars[1]<<endl;
cout<<&pstars[2]<<endl;
cout<<sizeof(pstars)<<endl
    <<sizeof(*pstars)<<endl
    <<sizeof(pstars[5])<<endl;
cout<<*pstars[5]<<endl;
cout<<sizeof(sqtars)<<endl;



    return 0;

}
