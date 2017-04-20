#include "poligono.h"
#include "ponto.h"
#include <iostream>
#include <cmath>

Poligono::Poligono()
{
    std::cout << "Construtor poligono." << std::endl;
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
        std::cout << "\nPonto inserido "<< std::endl;
    }
    else{
        std::cout << "O limite maximo dos numeros de pontos foi atingido!";
    }
}

int Poligono::numeroVertices()
{
    return numVertice;
}

void Poligono::rotacionar(Ponto origem, float theta)
{
      float seno = sin(theta);
      float cosseno = cos(theta);
      float cx = origem.getX();
      float cy = origem.getY();

      for(int i=0; i < numVertice; i++){
      // translate point back to origin:
      float xold = vertice[i].Ponto::getX() - cx;
      float yold = vertice[i].Ponto::getY() - cy;

      // rotate point
      float xnew = xold * cosseno - yold * seno;
      float ynew = xold * seno + yold * cosseno;

      // translate point back:
      vertice[i].Ponto::setX(xnew + cx);
      vertice[i].Ponto::setX(ynew + cy);
      }
}

float Poligono::area()
{
    float a;
    int i=0, j = numVertice -1;
    for(i=0; numVertice < i; i++)
    {
        a = a + (vertice[i].getX() + vertice[j].getX())*(vertice[j].getY() - vertice[i].getY());
        j = i;
    }
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
        std::cout << "( " << vertice[i].getX() << ", " << vertice[i].getY() << ") ->";
    }
}


