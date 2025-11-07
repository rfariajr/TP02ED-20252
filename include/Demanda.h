#ifndef DEMANDA_H
#define DEMANDA_H

struct Ponto{
    double x, y;
    bool operator==(const Ponto& outro) const {        
        return (x == outro.x && y == outro.y);
    }
};

class Demanda {
    private:
    //id, tempo, origem e destino
    int id;    
    int idCorrida;
    int estado; //1. Corrida demandada 2. Corrida individual3. Corrida combinada 4. Corrida concluída
    double tempo;
    Ponto origem;
    Ponto destino;

    public:
    //construtores
    Demanda();
    Demanda(int id, double tempo, Ponto origem, Ponto destino);

    void printaDemanda();
    Ponto retornaOrigem();
    //destrutor
    ~Demanda();
};

#endif