#ifndef TRECHO_H
#define TRECHO_H

#include "../include/Lista.h"
#include "../include/Parada.h"


class Trecho {
    private:
    Parada* origem;
    Parada* destino;
    double duracao;
    double distancia;
    int tipo; //0 -coleta (duas paradas de embarque), 1 - entrega (duas paradas de desembarque), 2 - deslocamento (embarque e desembarque)

    public:
    Trecho() 
        : origem(nullptr), destino(nullptr), duracao(0.0), distancia(0.0), tipo(0)
        { }
    Trecho(Parada* origem, Parada* destino, double duracao, double distancia, int tipo)
        : origem(origem), destino(destino), duracao(duracao), distancia(distancia), tipo(tipo)
        { }
};

typedef Lista<Trecho> ListaTrechos;

#endif