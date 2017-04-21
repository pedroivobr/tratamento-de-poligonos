#include "retangulo.h"
#include "poligono.h"

Retangulo::Retangulo(float x, float y, float largura, float altura){
    this->setVertice(x,y);
    this->setVertice(x - largura,y);
    this->setVertice(x - largura, y - altura);
    this->setVertice(x,y-altura);
}
