#include "ProgramacaoGenerica.h"
template <typename T>
ProgramacaoGenerica<T>::ProgramacaoGenerica(T valor) : variavel_generica(valor){}

template <typename T>
T ProgramacaoGenerica<T>::getVariavelGenerica(){
    return variavel_generica;
}

int main(){
    ProgramacaoGenerica<int> * p = new ProgramacaoGenerica<int>(10);
    ProgramacaoGenerica<bool> * p1 = new ProgramacaoGenerica<bool>(false);
    p->variavel_generica = 10;

    return 0;
}