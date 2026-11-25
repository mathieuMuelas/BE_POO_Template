#include "Clignotant.h"
#include <Arduino.h>

Clignotant::Clignotant()
    : Signalisation(),
      tempsPrecedent(0),
      etatLED(false)
{
}

Clignotant::~Clignotant()
{
}

void Clignotant::init()
{
    // Configuration des entrees boutons
    pinMode(BP_GAUCHE, INPUT_PULLUP);
    pinMode(BP_DROIT, INPUT_PULLUP);

    // Configuration de la sortie LED
    pinMode(LED_CLIGNOTANT, OUTPUT);

    digitalWrite(LED_CLIGNOTANT, LOW);
}

void Clignotant::lireBoutons()
{
    // INPUT_PULLUP : LOW signifie bouton appuye
    bool gauche = (digitalRead(BP_GAUCHE) == LOW);
    bool droite = (digitalRead(BP_DROIT) == LOW);

    // Au moins un bouton appuye
    if (gauche || droite)
    {
        if (!actif)
        {
            activer();
            tempsPrecedent = millis();
            etatLED = false;
        }
    }
    else
    {
        desactiver();
    }
}

void Clignotant::actualiser()
{
    lireBoutons();

    if (!actif)
        return;

    unsigned long tempsActuel = millis();

    // Changement d'etat toutes les 500 ms
    if (tempsActuel - tempsPrecedent >= intervalle)
    {
        tempsPrecedent = tempsActuel;

        etatLED = !etatLED;

        digitalWrite(LED_CLIGNOTANT, etatLED ? HIGH : LOW);
    }
}

void Clignotant::desactiver()
{
    Signalisation::desactiver();

    etatLED = false;

    digitalWrite(LED_CLIGNOTANT, LOW);
}