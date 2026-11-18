/******************************************************************************
 * Nom du fichier : roue.h
 * Rôle          : Déclaration de la classe CRoue
 * Auteur        : BTS CIEL
 * Version       : 1.0
 * Compilation   : g++ -Wall -pedantic -std=c++11
 ******************************************************************************/

#ifndef ROUE_H
#define ROUE_H

#include <string>

class CRoue
{
private:
    int dimension;      // Dimension de la roue (ex: 15, 16)
    std::string marque; // Marque du pneu (ex: Michelin, Pirelli)
    float pression;     // Pression en bars (ex: 2.2)

public:
    CRoue();
    CRoue(int d, std::string ma, float p);
    ~CRoue();

    void afficher() const;
    void crever();
    void degonfler();
    void gonfler();
};

#endif