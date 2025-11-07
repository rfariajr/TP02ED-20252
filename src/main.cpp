#include <iostream>

#include "../include/Demanda.h"
#include "../include/Parada.h"
#include "../include/Ponto.h"

int main() {
    /*
    0 - capacidade veículo
    1 - velocidade veículo 
    2 - intervalo temporal máximo entre corridas
    3 - distância máxima entre origens de corridas
    4 - distância máxima entre destinos de corridas
    5 - eficiência mínima da corrida combinada
    */
    int parametros[6];

    //Recebe os parametros
    for(int i = 0; i < 6; ++i) {
        std::cin >> parametros[i];
    }

    //Recebe as demandas
    int numDemandas;
    
    std::cin >> numDemandas;

    Demanda v[numDemandas];
    
    int id;
    double tempo;
    Ponto origem;
    Ponto destino;

    for(int i = 0; i < numDemandas; ++i) {
        std::cin >> id >> tempo >> origem.x >> origem.y >> destino.x >> destino.y;
        v[i] = Demanda(id, tempo, origem, destino);
    }

    //Printa as informações recebidas para fins de debug
    for(int i = 0; i < 6; ++i) {
        std::cout << "Parâmetro " << i + 1 << ": " << parametros[i] << std::endl;
    }

    for(int i = 0; i < numDemandas; ++i) {
        v[i].printaDemanda();
    }
    return 0;
}