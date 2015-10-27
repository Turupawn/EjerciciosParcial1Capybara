#include <iostream>

using namespace std;

template <typename T1, typename T2>
T1 sumar(T1 a, T2 b)
{
    return a+b;
}

class MiClase
{
public:
    int num;
    MiClase(int num)
    {
        this->num = num;
    }
    MiClase operator+(MiClase param)
    {
        MiClase respuesta(num+param.num);
        return respuesta;
    }
};

template<typename T>
class MiOtraClase
{
public:
    T valor;
};

int main()
{
    cout<<sumar(10,20)<<endl;
    MiClase mi_clase = sumar(MiClase(100),MiClase(200));
    cout<<mi_clase.num<<endl;

    MiOtraClase<int> otra1;
    otra1.valor = 10;
    cout<<otra1.valor<<endl;

    MiOtraClase<string> otra2;
    otra2.valor = "Test";
    cout<<otra2.valor<<endl;

    return 0;
}



