#ifndef CLIGNOTANT_H_
#define CLIGNOTANT_H_

#include "Signalisation.h"

class Clignotant : public Signalisation
{
private:
    // Affectation des broches ESP8266
    static const int BP_GAUCHE = 12;       // GPIO12 = D6
    static const int LED_CLIGNOTANT = 5;   // GPIO5 = D1

    unsigned long tempsPrecedent;
    const unsigned long intervalle = 10;

    bool etatLED;

public:
    Clignotant();
    virtual ~Clignotant();

    void init();
    void lireBoutons();
    void actualiser();

    void desactiver() override;
};

#endif