/******************************************************************************
 * Nom du fichier : voiture.h
 * Rôle          : Déclaration de la classe Cvoiture
 * Auteur        : BTS CIEL
 * Version       : 2.0
 * Compilation   : g++ -Wall -pedantic -std=c++11
 ******************************************************************************/

#ifndef VOITURE_H
#define VOITURE_H

#include <string>
#include "roue.h"
#include "moteur.h"

class Cvoiture
{
private:
    std::string marque;     // Marque de la voiture
    std::string modele;     // Modèle de la voiture
    int vitesse;            // Vitesse actuelle de la voiture (km/h)

    CMoteur moteur;         // Composition : Un moteur associé à la voiture
    CRoue Roues[4];         // Composition : Tableau contenant les 4 roues

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