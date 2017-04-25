#ifndef PONTO_H
#define PONTO_H

/**
 * @brief A Classe Ponto serve para fazer operações com pontos.
 *
 * A classe Ponto reliza operações de soma, subtração, modulo e deslocamento.
 */
class Ponto
{
private:
    float x,y;
public:
    /**
     * @brief Ponto é o construtor da classe Ponto.
     *
     * O construtor padrão cria um ponto sem valores definidos.
     */
    Ponto(void);
    /**
     * @brief Ponto é o construtor da classe Ponto.
     * @param x é o valor da coordenada x.
     * @param y é o valor da coordenada y.
     *
     * Contrutor da classe Ponto cria um ponto com os elementos (x,y).
     */
    Ponto(float x,float y);
    ~Ponto();
    /**
     * @brief setX Defini o valor de x.
     * @param _x Valor da coordenada x.
     *
     * O método defini o valor da coordenada x do ponto.
     */
    void setX(float _x);
    /**
     * @brief setY Defini o valor de y.
     * @param _y Valor da coordenada y.
     *
     * O método defini o valor da coordenada y do ponto.
     */
    void setY(float _y);
    /**
     * @brief setXY Defini o valor de x e y.
     * @param _x Valor da coordenada x.
     * @param _y Valor da coordenada y.
     *
     * O método defini o valor das coordenadas x e y do ponto.
     */
    void setXY(float _x,float _y);
    /**
     * @brief getX Recupera o valor de x.
     * @return Retorna o valor de x.
     *
     * Recupera o valor da coordenada x do Ponto.
     */
    float getX();
    /**
     * @brief getY Recupera o valor de y.
     * @return Retorna o valor de y.
     *
     * Recupera o valor da coordenada y do Ponto.
     */
    float getY();
    /**
     * @brief add Soma de dois pontos.
     * @param p1 Parametro de soma.
     * @return Resultado da soma.
     *
     * O método soma os dois pontos e retorna o resultado.
     */
    Ponto add(Ponto p1);
    /**
     * @brief sub Subtração de dois pontos.
     * @param p1 Parametro de subtração.
     * @return Resultado da subtração
     *
     * O método realiza a subtração entre dois pontos e retorna o resultado.
     */
    Ponto sub(Ponto p1);
    /**
     * @brief norma Norma do ponto.
     * @return Retorna a norma.
     *
     * O método realiza a operação de norma e retorna o resultado.
     */
    float norma();
    /**
     * @brief translada Desloca o ponto
     * @param a Deslocamento em x.
     * @param b Deslocamento em y.
     *
     * O método realiza o deslocamento do ponto com parametros em x e y.
     */
    void translada(float a,float b);
    /**
     * @brief imprimirPonto Impressão do ponto
     *
     * A função mostra no terminal o ponto em termo de x e y.
     */
    void imprimirPonto();
};

#endif // PONTO_H
