#ifndef DEMANDA_H
#define DEMANDA_H

struct Ponto{
    double x, y;
};

class Demanda {
    private:
    //id, tempo, origem e destino
    int id;
    int tempo;
    int idCorrida;
    int estado;
    Ponto origem;
    Ponto destino;

    public:
    //construtores
    Demanda();
    Demanda(int id, int tempo, Ponto origem, Ponto destino);

    void printaDemanda();
    //destrutor
    ~Demanda();
};

#endif