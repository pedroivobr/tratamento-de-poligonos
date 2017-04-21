#include "poligono.h"
#include "ponto.h"
#include <iostream>
#include <cmath>

Poligono::Poligono()
{

}

void Poligono::setVertice(Ponto ponto)
{
    if(numVertice < 99){
        vertice[numVertice] = ponto;
        numVertice++;
    }
    else{
        std::cout << "O limite maximo dos numeros de pontos foi atingido!";
    }
}

void Poligono::setVertice(float x, float y)
{
    if(numVertice < 99){
        vertice[numVertice].setXY(x,y);
        numVertice++;
    }
    else{
        std::cout << "O limite maximo dos numeros de pontos foi atingido!";
    }
}

int Poligono::numeroVertices()
{
    return numVertice;
}

void Poligono::rotacionar(float x, float y, float theta)
{
      float seno = sin(theta);
      float cosseno = cos(theta);

      for(int i=0; i < numVertice; i++){
      // translate point back to origin:
      float xold = vertice[i].getX() - x;
      float yold = vertice[i].getY() - y;

      // rotate point
      float xnew = xold * cosseno - yold * seno;
      float ynew = xold * seno + yold * cosseno;

      // translate point back:
      vertice[i].setX(xnew + x);
      vertice[i].setX(ynew + y);
      }
}

float Poligono::area()
{
    float a;
    int i=0, j = numVertice -1;
    for(i=0; i < numVertice; i++)
    {
        a = a + (vertice[i].getX() + vertice[j].getX())*(vertice[j].getY() - vertice[i].getY());
        j = i;
    }
    //modulo
    a = a*a;
    a = sqrt(a);
    return 0.5*(a);
}

void Poligono::translada(float a, float b)
{
    for(int i=0; numVertice < i; i++)
        vertice[i].Ponto::translada(a,b);
}

void Poligono::imprimir()
{
    for(int i=0; i < numVertice; i++){
        vertice[i].imprimirPonto();
        std::cout << " ->";
    }
}


