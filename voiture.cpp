/******************************************************************************
 * Nom du fichier : voiture.cpp
 * Rôle          : Implémentation des méthodes de la classe Cvoiture
 * Auteur        : BTS CIEL
 * Version       : 2.0
 * Compilation   : g++ -Wall -pedantic -std=c++11
 ******************************************************************************/

#include "voiture.h"
#include <iostream>

// Constructeur paramétré : initialise la voiture et délègue la création du moteur
Cvoiture::Cvoiture(std::string ma, std::string mo, float cyl, int puiss, std::string carb)
    : marque(ma), modele(mo), vitesse(0), moteur(cyl, puiss, carb)
{
    // Le tableau de 4 roues est initialisé automatiquement avec le constructeur par défaut de CRoue
}

// Destructeur
Cvoiture::~Cvoiture()
{
    std::cout << "Destruction de la voiture " << marque << " " << modele << "." << std::endl;
}

// Démarrer la voiture (délègue au moteur)
void Cvoiture::demarrer()
{
    std::cout << "Tentative de démarrage de la " << marque << " " << modele << " :" << std::endl;
    moteur.demarrer();
}

// Arrêter la voiture (délègue au moteur et remet la vitesse à 0)
void Cvoiture::arreter()
{
    vitesse = 0;
    moteur.arreter();
    std::cout << "La " << marque << " " << modele << " est à l'arrêt complet." << std::endl;
}

// Accélérer
void Cvoiture::accelerer(int v)
{
    if (v > 0)
    {
        vitesse += v;
        // On répercute l'accélération sur le régime du moteur de manière proportionnelle
        moteur.accelerer(v * 40); 
        std::cout << "La voiture accélère. Vitesse actuelle : " << vitesse << " km/h." << std::endl;
    }
}

// Ralentir
void Cvoiture::ralentir(int v)
{
    if (v > 0)
    {
        vitesse -= v;
        if (vitesse < 0)
        {
            vitesse = 0;
        }
        std::cout << "La voiture ralentit. Vitesse actuelle : " << vitesse << " km/h." << std::endl;
    }
}

// Affichage global de la voiture et de ses composants
void Cvoiture::afficher() const
{
    std::cout << "\n===============================" << std::endl;
    std::cout << " Véhicule : " << marque << " " << modele << std::endl;
    std::cout << " Vitesse actuelle : " << vitesse << " km/h" << std::endl;
    std::cout << "===============================" << std::endl;
    moteur.afficher();
    afficherRoues();
    std::cout << "===============================\n" << std::endl;
}

// Affichage des 4 roues
void Cvoiture::afficherRoues() const
{
    std::cout << "État des roues du véhicule :" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        std::cout << " - Roue [" << i << "]";
        Roues[i].afficher();
    }
}