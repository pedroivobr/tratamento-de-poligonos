#include "ponto.h"
#include <cmath>
#include <iostream>

Ponto::Ponto()
{
}

Ponto::Ponto(float _x, float _y)
{
    x = _x;
    y = _y;
}

Ponto::~Ponto()
{
    //Destrutor Ponto
}

void Ponto::setX(float _x)
{
    x = _x;
}

void Ponto::setY(float _y)
{
    y = _y;
}

void Ponto::setXY(float _x, float _y)
{
    x = _x;
    y = _y;
}

float Ponto::getX()
{
    return x;
}

float Ponto::getY()
{
    return y;
}

Ponto Ponto::add(Ponto p1)
{
    Ponto pOut;
    pOut.x = x + p1.x;
    pOut.y = y + p1.y;
    return pOut;
}

Ponto Ponto::sub(Ponto p1)
{
    Ponto pOut;
    pOut.x = x - p1.x;
    pOut.y = y - p1.y;
    return pOut;
}

float Ponto::norma()
{
    float norma;
    norma = sqrt(x*x + y*y);
    return norma;
}

void Ponto::translada(float a, float b)
{
    x = x + a;
    y = y + b;
}

void Ponto::imprimirPonto()

{
    std::cout << "( "<< x << ", " << y << ")";
}




