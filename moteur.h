/******************************************************************************
 * Nom du fichier : moteur.h
 * Rôle          : Déclaration de la classe CMoteur
 * Auteur        : BTS CIEL
 * Version       : 1.0
 * Compilation   : g++ -Wall -pedantic -std=c++11
 ******************************************************************************/

#ifndef MOTEUR_H
#define MOTEUR_H

#include <string>

class CMoteur
{
private:
    float cylindree;            // Cylindrée du moteur en litres
    int puissance;              // Puissance en chevaux (ch)
    std::string typeCarburant;  // Type d'énergie ("Essence", "Diesel", etc.)
    bool enMarche;              // État du moteur (true = démarré, false = arrêté)
    int regime;                 // Régime moteur en tr/min

public:
    CMoteur();
    CMoteur(float cyl, int puiss, std::string carb);
    ~CMoteur();

    void demarrer();
    void arreter();
    void accelerer(int trMin);
    int getPuissance() const;
    void afficher() const;
};

#endif