#include <iostream>
#include "../include/Demanda.h"

Demanda::Demanda()
    : id(-1), tempo(-1), idCorrida(-1), estado(1), origem({-1.0, -1.0}), destino({-1.0, -1.0})
{

}

Demanda::Demanda(int id, int tempo, Ponto origem, Ponto destino)
    : id(id), tempo(tempo), origem(origem), destino(destino)
{

}

void Demanda::printaDemanda() {
    std::cout << "id: " << id;
    std::cout << ", origem: {" << origem.x << "," << origem.y << "}";
    std::cout << ", destino: {" << destino.x << "," << destino.y << "}";
    std::cout << ", tempo: " << tempo << std::endl;
}

Demanda::~Demanda() {

}