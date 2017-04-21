#ifndef PONTO_H
#define PONTO_H


class Ponto
{
private:
    float x,y;
public:
    Ponto();
    Ponto(float,float);
    void setX(float);
    void setY(float);
    void setXY(float,float);
    float getX();
    float getY();
    Ponto add(Ponto);
    Ponto sub(Ponto);
    float norma();
    void translada(float,float);
    void imprimirPonto();
};

#endif // PONTO_H
