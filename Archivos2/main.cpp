#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("ejemplo");
    out<<"test"<<'\t';
    out<<10<<' ';
    out<<true<<endl;
    out<<'r'<<endl;
    out<<43.5<<endl;
    out.close();

    ifstream in("ejemplo");
    string str;
    while(in>>str)
    {
        cout<<str<<" ";
    }

    return 0;
}
