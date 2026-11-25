#ifndef SIGNALISATION_H_
#define SIGNALISATION_H_

#include "TableauDeBord.h"

class Signalisation : public TableauDeBord
{
protected:
    bool actif;

public:
    Signalisation();
    virtual ~Signalisation();

    virtual void activer();
    virtual void desactiver();
};

#endif