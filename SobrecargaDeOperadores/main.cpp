#include <iostream>

using namespace std;

class Numero
{
public:
    int num;
    Numero(int num)
    {
        this->num = num;
    }
    Numero operator+(Numero param)
    {
        Numero suma(num+param.num);
        return suma;
    }
};

int main()
{
    Numero n1(10);
    Numero n2(20);
    Numero n3(30);
    Numero suma = n1+n2+n3;
    cout<<suma.num<<endl;
    return 0;
}
