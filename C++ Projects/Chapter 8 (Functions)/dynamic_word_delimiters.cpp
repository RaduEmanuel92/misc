#include<iostream>
#include<string>
#include<memory>
#include<iomanip>
#include<vector>s

using namespace std;
using Words = vector<string>;
using Pwords = shared_ptr<Words>;

Pwords read_words(const string& str, const string separators);
void list_words (const Pwords pwords);

int main()
{
    string text;
    cout<<"Input text to be analyzed and press '*':\n\n ";
    getline(cin, text, '*');
    string separators{" .,:;?!\"'\n"};
    auto pwords = read_words(text, separators);
    list_words(pwords);

}
Pwords read_words(const string& str, const string separators)
{
    auto pwords = make_shared<vector<string>>();
    size_t startw{str.find_first_not_of(separators)};
    size_t endw{};

    while(startw != string::npos)
    {
        endw = str.find_first_of(separators, startw+1);
        if(endw == string::npos)
            endw= str.length();
        pwords -> push_back(str.substr(startw, endw - startw));
        startw = str.find_first_not_of(separators, endw+1);
    }

    return pwords;
}

void list_words(const Pwords pwords)
{
    cout<<"Your text contains the following words:\n\n";
    size_t nr{0};

    for( auto& w: *pwords)
    {
        cout<<setw(15)<<w;
        if(!(++nr%5))
            cout<<endl;
    }
    cout<<endl;

}
