#ifndef CLIGNOTANT_H_
#define CLIGNOTANT_H_

#include "Signalisation.h"

class Clignotant : public Signalisation
{
private:

    // Affectation des broches ESP8266 (GPIO)
    static const int BP_GAUCHE = 12; // GPIO12 = D6
    static const int BP_DROIT  = 13; // GPIO13 = D7
    static const int LED_CLIGNOTANT = 5; // GPIO5 = D1

    // Gestion du clignotement
    unsigned long tempsPrecedent;
    bool etatLED;

    // Temps entre deux changements d'etat
    const unsigned long intervalle = 500;

public:

    Clignotant();
    ~Clignotant();

    void init();

    // Lecture des boutons
    void lireBoutons();

    // Gestion de la LED
    void actualiser();

    void desactiver() override;
};

#endif