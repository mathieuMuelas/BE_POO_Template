#ifndef FEUCROISEMENT_H_
#define FEUCROISEMENT_H_

#include "Eclairage.h"

class FeuCroisement : public Eclairage
{
public:
    FeuCroisement();
    ~FeuCroisement();

    void activer();
    void desactiver();
};

#endif