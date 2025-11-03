#include <iostream>

int main() {
    int parametros[5];

    for(int i = 0; i < 5; ++i) {
        std::cin >> parametros[i];
    }

    //origem, destino, identificador, tempo
    int id, tempo;
    double origemX, origemY, destinoX, destinoY;
    while(std::cin >> origemX >> origemY >> destinoX >> destinoY >> id >> tempo) {
        std::cout << "id: " << id;
        std::cout << ", origem: {" << origemX << "," << origemY << "}";
        std::cout << ", destino: {" << destinoX << "," << destinoY << "}";
        std::cout << ", tempo: " << tempo << std::endl;
    }

    return 0;
}