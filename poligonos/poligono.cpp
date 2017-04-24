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
      vertice[i].setY(ynew + y);
      }
}

float Poligono::area()
{
    float area=0;
    for(int i=0; i < numVertice - 1;i++){
            area += (vertice[i].getX()*vertice[i+1].getY() - vertice[i].getY()*vertice[i+1].getX());
        }

    area += (vertice[numVertice - 1].getX()*vertice[0].getY() - vertice[numVertice - 1].getY()*vertice[0].getX());
    return 0.5*(abs(area));
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


