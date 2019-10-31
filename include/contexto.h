#ifndef CONTEXTO_H
#define CONTEXTO_H
#include "strategy.h"


class contexto
{
    public:
        contexto();
        virtual ~contexto();
        void executaImpressao();
        void setStrategy(strategy *st);

    protected:

    private:
        strategy *minhaStrategy;
};

#endif // CONTEXTO_H
