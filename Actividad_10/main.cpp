#include <iostream>
#include <list>
#include <cstdio>
#include "math.h"

using namespace std;


//clase complejo
//@param preal
//@param pimg

class Complejo{
public:
    Complejo(float r, float i): preal(r), pimg(i) {}
    Complejo() {}
    float getReal(){
        return preal;
    }
    float getImg(){
        return pimg;
    }

private:
    float preal;
    float pimg;
};

//funcion devuelvemenor
//@param lista de complejos

Complejo devuelveMenor(list<Complejo> c){
    Complejo ComplejoMenor(3, 2);
    float menor;
    float siguiente;

    list<Complejo>::iterator it;
    it = c.begin();
    menor = sqrt((it->getReal()) * (it->getReal()) + (it->getImg()) * (it->getImg()));

    ComplejoMenor = *(it);

    while(it != c.end()){
        siguiente = sqrt(((it->getReal()) * (it->getReal())) + ((it->getImg()) * (it->getImg())));
        it++;

        if (siguiente < menor){
            menor = siguiente;
            ComplejoMenor = *it ;
        }
    }
    return *it;
}

int main()
{
    Complejo c1(1.0,4.0);
    Complejo c2(2.0,3.0);

    list<Complejo> lista2;
    lista2.push_back(c1);
    lista2.push_back(c2);
    cout << "c1: " << c1.getReal() << "+" << c1.getImg() << "i " << endl;
    cout << "c2: " << c2.getReal() << "+" << c2.getImg() << "i " << endl;
    for (int i = 0;i < 3; i ++)
            lista2.pop_front(i);

    cout << "eee: " ;
    devuelveMenor(lista2);

    return 0;
}
