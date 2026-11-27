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
    // Configuration du bouton
    pinMode(BP_GAUCHE, INPUT_PULLUP);

    // Configuration du voyant
    pinMode(LED_CLIGNOTANT, OUTPUT);

    // Voyant éteint au démarrage
    digitalWrite(LED_CLIGNOTANT, HIGH);

    desactiver();
}

void Clignotant::lireBoutons()
{
    bool gauche = (digitalRead(BP_GAUCHE) == HIGH);

    if (gauche)
    {
        if (!actif)
        {
            activer();
            tempsPrecedent = millis();
            etatLED = true;
            digitalWrite(LED_CLIGNOTANT, LOW);
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

    if (tempsActuel - tempsPrecedent >= intervalle)
    {
        tempsPrecedent = tempsActuel;
        etatLED = !etatLED;

        digitalWrite(LED_CLIGNOTANT, etatLED ? LOW : HIGH);

        Serial.println(etatLED ? "LED ALLUMEE" : "LED ETEINTE");
    }
}

void Clignotant::desactiver()
{
    Signalisation::desactiver();

    etatLED = false;

    // HIGH = voyant éteint
    digitalWrite(LED_CLIGNOTANT, LOW);
}