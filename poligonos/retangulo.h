#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"


class Retangulo : public Poligono
{
private:
    Poligono* retangulo;
public:
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
