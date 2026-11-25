#ifndef TABLEAU_DE_BORD_H_
#define TABLEAU_DE_BORD_H_

#include "Voiture.h"

class TableauDeBord : public Voiture
{
public:

    // Constructeur
    TableauDeBord();

    // Destructeur
    ~TableauDeBord();

    // Affichage du tableau de bord
    void afficherTableauDeBord();

    // Execution des commandes
    void executerCommande();
};

#endif