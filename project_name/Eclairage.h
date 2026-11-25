#ifndef ECLAIRAGE_H_
#define ECLAIRAGE_H_

#include "TableauDeBord.h"

class Eclairage : public TableauDeBord
{
private:
    bool active;    // état de l'éclairage

public:
    // Constructeur
    Eclairage();

    // Destructeur
    ~Eclairage();

    // Activation / désactivation
    void activer();
    void desactiver();

    // Etat
    bool estActive() const;
};

#endif