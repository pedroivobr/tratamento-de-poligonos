#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Retangulo re(4,2,4,2);
    cout << re.numeroVertices() << endl; //deveria mostrar valor 4
    re.imprimir();
    return 0;
}
