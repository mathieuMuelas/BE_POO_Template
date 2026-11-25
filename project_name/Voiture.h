#ifndef VOITURE_H
#define VOITURE_H

class Voiture {
private:
    bool allume;            // état du moteur / contact
    bool authentification;  // true si le conducteur est authentifié

public:
    Voiture();              // constructeur
    ~Voiture();             // destructeur

    bool acces(bool badgeValide);  // tente l'authentification
    void verrouillage();           // verrouille : désauthentifie et éteint
    bool estAllume() const;
    bool estAuthentifie() const;
    bool demarrer();               // allume seulement si authentifié
};

#endif

