#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"


class Poligono : public Ponto
{
private:
    Ponto vertice[99]; //ultimo sempre sera usado com o valor do primeiro nas funções
    int numVertice=0;
public:
    Poligono();
    void setVertice(Ponto);
    void setVertice(float x,float y);
    int numeroVertices();
    void rotacionar(Ponto,float);
    float area();
    void translada(float,float);
    void imprimir();
};

#endif // POLIGONO_H
