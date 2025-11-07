#include <iostream>

#include "../include/Parada.h"
#include "../include/Demanda.h"

Parada::Parada(Demanda* demandaAssociada, Ponto* coordenada) {
    this->demandaAssociada = demandaAssociada;
    this->coordenada = coordenada;
    if(*coordenada == demandaAssociada->retornaOrigem()) {
        tipo = true;
    }
    else{
        tipo = false;
    }
}

Parada::~Parada() {

}

/*void Parada::inserirFim(int tipo, int idDemanda, Ponto coordenada) {
    No* novoNo = new No(tipo, idDemanda, coordenada);

    if(tam == 0) {
        inicio = novoNo;
        fim = novoNo;
        ++tam;
    }
    else {
        fim->prox = novoNo;
        fim = novoNo;
        ++tam;
    }
}

void Parada::imprimeLista() {
    if(inicio == nullptr) {
        std::cout << "Lista vazia" << std::endl;
    }
    else {
        No* atual = inicio;
        int contador = 0;
        while(atual != nullptr) {
            std::cout << "Nó " << contador << std::endl;
            ++contador;
            std::cout << "Tipo de parada: " << atual->tipo << std::endl;
            std::cout << "id da demanda: " << atual->idDemanda << std::endl;
            std::cout << "Coordenada da parada: {" << atual->coordenada.x << "," << atual->coordenada.y << "}" << std::endl;
            atual = atual->prox;
        } 
    }
}

Parada::~Parada() {
    No* atual = inicio;
    No* aux = nullptr;
    while(atual != nullptr) {
        aux = atual->prox;
        delete atual;
        atual = aux;
    }
    inicio = nullptr;
    fim = nullptr;
    tam = 0;
}*/