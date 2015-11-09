#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int>mi_mapa;
    mi_mapa["a"]=10;
    mi_mapa["b"]=20;
    cout<<mi_mapa["b"]<<endl;
    return 0;
}
