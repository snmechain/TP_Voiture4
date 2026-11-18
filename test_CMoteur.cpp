/******************************************************************************
 * Nom du fichier : testmoteur.cpp
 * Rôle          : Programme principal de test de la classe CMoteur
 * Auteur        : BTS CIEL
 * Version       : 1.0
 * Compilation   : g++ -Wall -pedantic -std=c++11 moteur.cpp testmoteur.cpp -o testmoteur
 *************************************************----------------*************/

#include <iostream>
#include "moteur.h"

int main()
{
    std::cout << "=== 1. Test du constructeur par défaut (m1) ===" << std::endl;
    CMoteur m1;
    m1.afficher();

    std::cout << "\n=== 2. Test du constructeur paramétré (m2) ===" << std::endl;
    CMoteur m2(2.0f, 150, "Diesel");
    m2.afficher();

    std::cout << "\n=== 3. Tentative d'accélération à l'arrêt ===" << std::endl;
    m2.accelerer(2000);
    m2.afficher();

    std::cout << "\n=== 4. Démarrage de m2 (et test de double démarrage) ===" << std::endl;
    m2.demarrer();
    m2.demarrer(); // Doit afficher un avertissement

    std::cout << "\n=== 5. Accélérations et test du plafonnement (6500 tr/min) ===" << std::endl;
    m2.accelerer(2500);
    m2.afficher();
    m2.accelerer(5000); // Dépasse le plafond, doit se bloquer à 6500
    m2.afficher();

    std::cout << "\n=== 6. Arrêt du moteur ===" << std::endl;
    m2.arreter();
    m2.afficher();

    std::cout << "\n=== Fin du programme de test ===" << std::endl;
    return 0;
}