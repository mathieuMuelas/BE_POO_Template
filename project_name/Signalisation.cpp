#include "Signalisation.h"

Signalisation::Signalisation()
    : TableauDeBord(), actif(false)
{
}

Signalisation::~Signalisation()
{
}

void Signalisation::activer()
{
    actif = true;
}

void Signalisation::desactiver()
{
    actif = false;
}