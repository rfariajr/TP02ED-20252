#ifndef PARADA_H
#define PARADA_H

#include "../include/Demanda.h"

class No {
    public:
    int tipo; //0 - embarque, 1 - desembarque
    int idDemanda;
    Ponto coordenada;
    No* prox;

    No(int tipo, int idDemanda, Ponto coordenada)
        : tipo(tipo), idDemanda(idDemanda), coordenada(coordenada), prox(nullptr)
    {

    }
};

class Parada {
    private:
    int tam;
    No* inicio;
    No* fim;

    public:
    Parada()
        : tam(0), inicio(nullptr), fim(nullptr)
    {

    }

    void inserirFim(int tipo, int idDemanda, Ponto coordenada);

    void imprimeLista();

    ~Parada();
};


#endif