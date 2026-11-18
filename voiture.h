#ifndef VOITURE_H
#define VOITURE_H

#include <string>
#include "roue.h"   // Indispensable pour les 4 roues
#include "moteur.h" // Indispensable pour le moteur

class Cvoiture
{
private:
    std::string marque;     
    std::string modele;     
    int vitesse;            

    // --- MODIFICATIONS CLÉS ICI ---
    CMoteur moteur;         // 1. Un objet moteur unique
    CRoue Roues[4];         // 2. Un tableau de 4 objets roues

public:
    Cvoiture(std::string ma, std::string mo, float cyl, int puiss, std::string carb);
    ~Cvoiture();

    void demarrer();
    void arreter();
    void accelerer(int v);
    void ralentir(int v);
    void afficher() const;
    void afficherRoues() const;
};

#endif