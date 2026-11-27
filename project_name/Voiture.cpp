
#include "Voiture.h"
#include <Arduino.h>

Voiture::Voiture() : allume(false), authentification(false)
{
}

Voiture::~Voiture()
{
}

bool Voiture::acces(bool badgeValide)
{
    if (badgeValide) {
        authentification = true;
        Serial.println("Acces autorise");
    } else {
        Serial.println("Acces refuse");
    }

    return authentification;
}

void Voiture::verrouillage()
{
    allume = false;
    authentification = false;
    Serial.println("Voiture verrouillee");
}

bool Voiture::demarrer()
{
    if (authentification) {
        allume = true;
        Serial.println("Voiture demarree");
        return true;
    }

    Serial.println("Demarrage impossible : non authentifie");
    return false;
}

bool Voiture::estAllume() const
{
    return allume;
}

bool Voiture::estAuthentifie() const
{
    return authentification;
}
