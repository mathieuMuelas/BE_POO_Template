
#include "TableauDeBord.h"
#include <Arduino.h>

TableauDeBord::TableauDeBord() : Voiture()
{
}

TableauDeBord::~TableauDeBord()
{
}

void TableauDeBord::afficherTableauDeBord()
{
    Serial.println("\n===== TABLEAU DE BORD =====");
    Serial.println("1. Eclairage");
    Serial.println("2. Signalisation");
    Serial.println("3. Visibilite");
    Serial.println("4. Confort");
}

void TableauDeBord::executerCommande()
{
    if (Serial.available() > 0)
    {
        int choix = Serial.parseInt();

        switch (choix)
        {
            case 1:
                Serial.println("Eclairage");
                break;

            case 2:
                Serial.println("Signalisation");
                break;

            case 3:
                Serial.println("Visibilite");
                break;

            case 4:
                Serial.println("Confort");
                break;

            default:
                Serial.println("Choix invalide");
                break;
        }
    }
}
