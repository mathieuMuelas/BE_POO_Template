#include "TableauDeBord.h"
#include <iostream>

using namespace std;

TableauDeBord::TableauDeBord() : Voiture(){}

TableauDeBord::~TableauDeBord(){}

void TableauDeBord::afficherTableauDeBord()
{
    cout << "\n===== TABLEAU DE BORD =====" << endl;
    cout << "1. Eclairage" << endl;
    cout << "2. Signalisation" << endl;
    cout << "3. Visibilite" << endl;
    cout << "4. Confort" << endl;
}

void TableauDeBord::executerCommande()
{
    int choix;
    afficherTableauDeBord();
    cout << "Votre choix : ";
    cin >> choix;
    switch (choix)
    {
        case 1:
            cout << "Eclairage" << endl;
            break;

        case 2:
            cout << "Signalisation" << endl;
            break;

        case 3:
            cout << "Visibilite" << endl;
            break;

        case 4:
            cout << "Confort" << endl;
            break;

        default:
            cout << "Choix invalide" << endl;
            break;
    }
}