#include "Voiture.h"
#include <iostream>

Voiture::Voiture() : allume(false), authentification(false) {
    std::cout << "Voiture créée (verrouillée, éteinte)" << std::endl;
}

Voiture::~Voiture() {
    std::cout << "Voiture détruite" << std::endl;
}

bool Voiture::acces(bool badgeValide) {
    if (badgeValide) {
        authentification = true;
        std::cout << "Accès autorisé" << std::endl;
    } else {
        std::cout << "Accès refusé" << std::endl;
    }
    return authentification;
}

void Voiture::verrouillage() {
    allume = false;            // on coupe le moteur avant de verrouiller
    authentification = false;
    std::cout << "Voiture verrouillée" << std::endl;
}

bool Voiture::demarrer() {
    if (authentification) {
        allume = true;
        return true;
    }
    std::cout << "Démarrage impossible : non authentifié" << std::endl;
    return false;
}

bool Voiture::estAllume() const { return allume; }
bool Voiture::estAuthentifie() const { return authentification; }