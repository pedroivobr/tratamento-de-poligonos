#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"

/**
 * @brief A classe Poligono serve para realizar operações com poligonos.
 *
 * A classe Poligono realiza operações de rotacionamento, cálculo de área e transladamento.
 */
class Poligono : public Ponto
{
private:
    Ponto* vertice = new Ponto [99];
    int numVertice=0;
public:
    /**
     * @brief Poligono é o construtor da classe Poligono.
     *
     * O construtor padrão da classe Poligono cria um conjunto de Ponto sem valores definidos.
     */
    Poligono();
    ~Poligono();
    /**
     * @brief setVertice Define valor de vertice.
     * @param ponto Valor do vertice.
     *
     * Define o valor de um vertice do conjunto.
     */
    void setVertice(Ponto ponto);
    /**
     * @brief setVertice Define valor de vertice.
     * @param _x Valor da coordenada x.
     * @param _y Valor da coordenada y.
     *
     * Define o valor de um vertice do conjunto.
     */
    void setVertice(float _x,float _y);
    /**
     * @brief numeroVertices Recupera número de vertices
     * @return Retorna número de vertices.
     *
     * A função recupera o número de vertices do poligono.
     */
    int numeroVertices();
    /**
     * @brief rotacionar Rotaciona Poligono.
     * @param x Coordenada x do ponto de rotação.
     * @param y Coordenada y do ponto de rotação.
     * @param theta Ângulo de rotação.
     *
     * O método realiza a rotação do poligono em torno do ponto (x,y) com o ângulo theta.
     */
    void rotacionar(float x,float y,float theta);
    /**
     * @brief area Cálculo de área.
     * @return Retorna a área.
     *
     * O método realiza o cálculo da área do poligono.
     */
    float area();
    /**
     * @brief translada Translada poligono.
     * @param a Deslocamento em x.
     * @param b Deslocamento em y.
     *
     * O método translada o poligono em a e b.
     */
    void translada(float a,float b);
    /**
     * @brief imprimir Imprimir poligono.
     *
     * A função imprime os vertices do poligono.
     */
    void imprimir();
};

#endif // POLIGONO_H
