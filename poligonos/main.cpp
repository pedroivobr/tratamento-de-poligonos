#include <iostream>
#include "ponto.h"
#include "poligono.h"


using namespace std;

int main()
{
    Ponto p1;
    Poligono po1;
    p1.setXY(2.3,3.5);
    p1.imprimir();
    po1.setVertice(p1);
    cout << "\Imprimir poligono:";
    po1.imprimir();
    return 0;
}
