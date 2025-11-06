#ifndef TRECHO_H
#define TRECHO_H

#include "../include/Parada.h"

struct Trecho {
    No* origem;
    No* destino;
    double duracao;
    double distancia;
    int tipo; //0 -coleta (duas paradas de embarque), 1 - entrega (duas paradas de desembarque), 2 - deslocamento (embarque e desembarque)
    Trecho* prox;
};

class listaTrecho {
    private:
    int tam;
    Trecho* inicio;
    Trecho* fim;

    public:
    listaTrecho()
        : tam(0), inicio(nullptr), fim(nullptr)
    {

    }

    void insereFim(No* origem, No* destino, double duracao, double distancia, int tipo);

    ~listaTrecho();
};

#endif