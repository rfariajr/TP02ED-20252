#ifndef CORRIDA_H
#define CORRIDA_H

#include "../include/Demanda.h"
#include "../include/Trecho.h"

//lista encadeadas de ids de demandas, trechos e paradas

struct listaDemandas{
    Demanda* demanda;
    listaDemandas* prox;
};


class Corrida {
    private:
    double tempoConclusao;
    double distPercorrida;
    int numParadas;
    //sequencia de coordenadas das paradas
    listaTrecho trechos;
    //Demandas associdas as listas
    listaDemandas* primeiraDemanda;

    public:
    Corrida(); //Após a inclusão da demanda são enviados para o insereFim de trecho
    ~Corrida();
};

#endif