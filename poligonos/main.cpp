#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Retangulo re(0,0,4,3);
    re.imprimir();
    cout << "\nArea do retangulo : " << re.area() << endl;
    re.translada(-3,4);
    cout << "Area do retangulo transladado: " << re.area() << endl;
    re.rotacionar(-2,-1.5,30);
    cout << "Area do retangulo rotacionado: " << re.area() << endl;
    re.rotacionar(-2,-1.5,-30);
    cout << "Area do retangulo rotacionando para o estado original: " << re.area() << endl;
    re.imprimir();
    return 0;
}
