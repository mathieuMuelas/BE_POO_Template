#include "Feu_route.h"
#include <iostream>

FeuRoute::FeuRoute() : Eclairage()
{
    std::cout << "Feu de route créé" << std::endl;
}

FeuRoute::~FeuRoute()
{
    std::cout << "Feu de route détruit" << std::endl;
}

void FeuRoute::activer()
{
    Eclairage::activer();
    if (estActive()) {
        std::cout << "-> Feux de route allumés" << std::endl;
    }
}

void FeuRoute::desactiver()
{
    Eclairage::desactiver();
    std::cout << "-> Feux de route éteints" << std::endl;
}