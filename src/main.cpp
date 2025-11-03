#include <iostream>

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

    int numDemandas;
    
    std::cin >> numDemandas;

    //Recebe as demandas
    int id, tempo;
    double origemX, origemY, destinoX, destinoY;
    while(std::cin >> id >> tempo >> origemX >> origemY >> destinoX >> destinoY) {
        std::cout << "id: " << id;
        std::cout << ", origem: {" << origemX << "," << origemY << "}";
        std::cout << ", destino: {" << destinoX << "," << destinoY << "}";
        std::cout << ", tempo: " << tempo << std::endl;
    }

    return 0;
}