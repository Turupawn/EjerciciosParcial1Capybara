#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("ejemplo");
    for(int i=0;i<3;i++)
    {
        int num;
        cout<<"Ingrese un numero: "<<endl;
        cin>>num;
        out<<num<<endl;
    }
    out.close();

    cout<<"===Leyendo del archivo==="<<endl;
    ifstream in("ejemplo");
    int num;
//    while(!in.eof())
//    {
//        in>>num;
//        cout<<"*"<<num<<endl;
//    }
    while(in>>num)
    {
        cout<<"*"<<num<<endl;
    }

    in.close();

    return 0;
}
