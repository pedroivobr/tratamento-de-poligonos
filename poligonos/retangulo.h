#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"


class Retangulo : public Poligono
{
private:
    Poligono retangulo;
public:
    Retangulo(float, float, float, float);
};

#endif // RETANGULO_H
