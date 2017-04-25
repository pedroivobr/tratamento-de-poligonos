#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief A classe Retangulo define retângulos.
 *
 * A classe Retangulo cria retangulos a partir de dados.
 */
class Retangulo : public Poligono
{
private:
    Poligono* retangulo;
public:
    /**
     * @brief Retangulo Construtor da classe Retangulo.
     * @param x Coordenada x do vertice principal.
     * @param y Coordenada y do vertice principal.
     * @param largura Largura do retângulo.
     * @param altura Altura do retângulo.
     *
     * O construtor define um retângulo a partir do vertice (x,y) e suas dimensões.
     */
    Retangulo(float x, float y, float largura, float altura);
    ~Retangulo();
};

#endif // RETANGULO_H
