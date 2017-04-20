#include "retangulo.h"
#include "poligono.h"

Retangulo::Retangulo(float x, float y, float largura, float altura){
    retangulo.setVertice(x,y);
    retangulo.setVertice(x - largura,y);
    retangulo.setVertice(x - largura, y - altura);
    retangulo.setVertice(x,y-altura);
}
