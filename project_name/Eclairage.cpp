#include "Eclairage.h"
#include <iostream>

Eclairage::Eclairage() : TableauDeBord(), active(false)
{
    std::cout << "Eclairage créé (éteint)" << std::endl;
}

Eclairage::~Eclairage()
{
    std::cout << "Eclairage détruit" << std::endl;
}

void Eclairage::activer()
{
    // Les booléens de Voiture sont privés : on passe par les accesseurs
    if (estAllume()) {
        active = true;
        std::cout << "Eclairage activé" << std::endl;
    } else {
        std::cout << "Activation impossible : voiture éteinte" << std::endl;
    }
}

void Eclairage::desactiver()
{
    active = false;
    std::cout << "Eclairage désactivé" << std::endl;
}

bool Eclairage::estActive() const
{
    return active;
}