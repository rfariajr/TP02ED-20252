#ifndef LISTA_HPP
#define LISTA_HPP

template <typename T>
struct No {
    T dado;
    No<T>* prox;

    No(const T& valor) : dado(valor), prox(nullptr) {}
};

template <typename T>
class Lista {
    private:
    No<T>* inicio;
    No<T>* fim;
    int tam;

    

    public:
    Lista() : inicio(nullptr), fim(nullptr), tam(0) {}
    
    void insereFim(const T& valor);
    int obterTamanho();

    ~Lista();
};

template <typename T>
void Lista<T>::insereFim(const T& valor) {
    No<T>* novoNo = new No<T>(valor);
    if(inicio == nullptr) {
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

template <typename T>
int Lista<T>::obterTamanho() {
    return tam;
}

template <typename T>
Lista<T>::~Lista() {
    No<T>* atual = inicio;
    while(atual != nullptr) {
        No<T>* proxNo = atual->prox;
        delete atual;
        atual = proxNo;
    }
    tam = 0;
}


#endif