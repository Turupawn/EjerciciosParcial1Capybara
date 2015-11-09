#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int>mi_lista;
    mi_lista.push_back(10);
    mi_lista.push_back(20);
    mi_lista.push_back(30);
    mi_lista.push_front(40);

    list<int>::iterator i = mi_lista.begin();
    i++;
    i++;
    mi_lista.insert(i,35);

    for(list<int>::iterator i = mi_lista.begin();
        i!=mi_lista.end();
        i++)
        cout<<*i<<endl;

    return 0;
}
