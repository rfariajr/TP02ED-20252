#ifndef PARADA_H
#define PARADA_H

#include "../include/Demanda.h"
#include "../include/Ponto.h"

class Parada{
    private:
    Demanda* demandaAssociada;
    Ponto coordenada;
    bool tipo; //true - embarque, false - desembarque

    public:
    Parada()
        : demandaAssociada(nullptr), coordenada({-1.0,-1.0}), tipo(false)
        { }
    Parada(Demanda* demandaAssociada, Ponto coordenada, bool tipo);

    ~Parada();
};
#endif