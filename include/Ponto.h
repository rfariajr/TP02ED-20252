#ifndef PONTO_H
#define PONTO_H

struct Ponto{
    double x, y;
    bool operator==(const Ponto& outro) const {        
        return (x == outro.x && y == outro.y);
    }
};

#endif