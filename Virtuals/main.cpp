#include <iostream>


using namespace std;

class Padre
{
public:
    virtual void miFuncion()
    {
        cout<<"Funcion del padre"<<endl;
    }
    virtual void funcionAbstracta() = 0;
};

class Hijo : public Padre
{
public:
    void miFuncion()
    {
        cout<<"Funcion del hijo"<<endl;
    }
    void funcionAbstracta()
    {
        cout<<"Funcion abstracta"<<endl;
    }
};

int main()
{
    Padre* ptr = new Hijo();
    return 0;
}
