#include "../include/Trecho.h"
#include "../include/Parada.h"

void listaTrecho::insereFim(Parada* origem, Parada* destino, double duracao, double distancia, int tipo) {
    Trecho* novoTrecho = new Trecho{origem, destino, duracao, distancia, tipo, nullptr}; 
    if(inicio == nullptr) {
        inicio = novoTrecho;
        fim = novoTrecho;
        ++tam;
    }
    else{
        fim->prox = novoTrecho;
        ++tam;
    }
}

listaTrecho::~listaTrecho() {
    Trecho* atual = inicio;
    Trecho* aux = nullptr;
    while(atual != nullptr) {
        aux = atual->prox;
        delete atual;
        atual = aux;
    }
    inicio = nullptr;
    fim = nullptr;
    tam = 0;
}
