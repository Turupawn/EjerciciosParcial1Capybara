#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("ejemplo");
    out<<"Test"<<endl;
    out.close();

    ifstream in("ejemplo");
    string test;
    in>>test;
    cout<<test<<endl;

    return 0;
}
