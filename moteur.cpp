/******************************************************************************
 * Nom du fichier : moteur.cpp
 * Rôle          : Implémentation des méthodes de la classe CMoteur
 * Auteur        : BTS CIEL
 * Version       : 1.0
 * Compilation   : g++ -Wall -pedantic -std=c++11
 ******************************************************************************/

#include "moteur.h"
#include <iostream>

// Constructeur par défaut
CMoteur::CMoteur()
    : cylindree(1.2f), puissance(75), typeCarburant("Essence"), enMarche(false), regime(0)
{
}

// Constructeur paramétré
CMoteur::CMoteur(float cyl, int puiss, std::string carb)
    : cylindree(cyl), puissance(puiss), typeCarburant(carb), enMarche(false), regime(0)
{
}

// Destructeur
CMoteur::~CMoteur()
{
    std::cout << "Destruction du moteur (" << cylindree << "L, " << puissance << " ch)." << std::endl;
}

// Démarrer le moteur
void CMoteur::demarrer()
{
    if (!enMarche)
    {
        enMarche = true;
        regime = 900; // Ralenti à 900 tr/min
        std::cout << "Moteur démarré. Régime de ralenti : 900 tr/min." << std::endl;
    }
    else
    {
        std::cout << "Avertissement : Le moteur est déjà en marche !" << std::endl;
    }
}

// Arrêter le moteur
void CMoteur::arreter()
{
    enMarche = false;
    regime = 0;
    std::cout << "Moteur arrêté." << std::endl;
}

// Accélérer
void CMoteur::accelerer(int trMin)
{
    if (enMarche)
    {
        regime += trMin;
        if (regime > 6500)
        {
            regime = 6500; // Plafonnement à 6500 tr/min
            std::cout << "Régime maximal atteint (6500 tr/min)." << std::endl;
        }
        else
        {
            std::cout << "Accélération de " << trMin << " tr/min. Régime actuel : " << regime << " tr/min." << std::endl;
        }
    }
    else
    {
        std::cout << "Erreur : Impossible d'accélérer, le moteur est arrêté !" << std::endl;
    }
}

// Accesseur (Getter)
int CMoteur::getPuissance() const
{
    return puissance;
}

// Affichage des caractéristiques
void CMoteur::afficher() const
{
    std::cout << "--- Caractéristiques du Moteur ---" << std::endl;
    std::cout << "Cylindrée     : " << cylindree << " L" << std::endl;
    std::cout << "Puissance     : " << puissance << " ch" << std::endl;
    std::cout << "Carburant     : " << typeCarburant << std::endl;
    std::cout << "État          : " << (enMarche ? "Démarré" : "Arrêté") << std::endl;
    std::cout << "Régime moteur : " << regime << " tr/min" << std::endl;
    std::cout << "----------------------------------" << std::endl;
}