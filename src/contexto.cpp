#include "contexto.h"

contexto::contexto()
{
    //ctor
}

contexto::~contexto()
{
    //dtor
}

void contexto::executaImpressao() {
    minhaStrategy -> imprimeDia();
}

void contexto::setStrategy(strategy *st) {
    minhaStrategy = st;
}
