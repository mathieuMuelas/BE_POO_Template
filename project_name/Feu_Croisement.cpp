#include "Feu_croisement.h"
#include <iostream>

FeuCroisement::FeuCroisement() : Eclairage()
{
    std::cout << "Feu de croisement créé" << std::endl;
}

FeuCroisement::~FeuCroisement()
{
    std::cout << "Feu de croisement détruit" << std::endl;
}

void FeuCroisement::activer()
{
    Eclairage::activer();   // vérifie que la voiture est allumée
    if (estActive()) {
        std::cout << "-> Feux de croisement allumés" << std::endl;
    }
}

void FeuCroisement::desactiver()
{
    Eclairage::desactiver();
    std::cout << "-> Feux de croisement éteints" << std::endl;
}