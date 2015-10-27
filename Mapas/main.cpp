#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int>mi_mapa;
    mi_mapa["A"]=10;
    mi_mapa["B"]=20;
    mi_mapa["C"]=30;
    cout<<mi_mapa["A"]<<endl;
    cout<<mi_mapa["B"]<<endl;
    cout<<mi_mapa["C"]<<endl;
    return 0;
}
