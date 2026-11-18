/******************************************************************************
 * Nom du fichier : roue.cpp
 * Rôle          : Implémentation des méthodes de la classe CRoue
 * Auteur        : BTS CIEL
 * Version       : 1.0
 * Compilation   : g++ -Wall -pedantic -std=c++11
 ******************************************************************************/

#include "roue.h"
#include <iostream>

// Constructeur par défaut
CRoue::CRoue()
    : dimension(15), marque("Michelin"), pression(2.0f)
{
}

// Constructeur paramétré
CRoue::CRoue(int d, std::string ma, float p)
    : dimension(d), marque(ma), pression(p)
{
}

// Destructeur
CRoue::~CRoue()
{
}

// Affichage des caractéristiques de la roue
void CRoue::afficher() const
{
    std::cout << "   -> Roue [Marque: " << marque 
              << ", Dimension: " << dimension 
              << " pouces, Pression: " << pression << " bars]" << std::endl;
}

// Crever la roue (pression à 0)
void CRoue::crever()
{
    pression = 0.0f;
    std::cout << "   -> La roue " << marque << " a crevé !" << std::endl;
}

// Dégonfler la roue
void CRoue::degonfler()
{
    if (pression >= 0.2f)
    {
        pression -= 0.2f;
    }
    else
    {
        pression = 0.0f;
    }
    std::cout << "   -> Dégonflage. Nouvelle pression : " << pression << " bars." << std::endl;
}

// Gonfler la roue
void CRoue::gonfler()
{
    pression += 0.2f;
    std::cout << "   -> Gonflage. Nouvelle pression : " << pression << " bars." << std::endl;
}