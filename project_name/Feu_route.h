#ifndef FEUROUTE_H_
#define FEUROUTE_H_

#include "Eclairage.h"

class FeuRoute : public Eclairage
{
public:
    FeuRoute();
    ~FeuRoute();

    void activer();
    void desactiver();
};

#endif