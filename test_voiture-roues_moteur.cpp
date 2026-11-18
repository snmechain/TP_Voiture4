/******************************************************************************
 * Nom du fichier : main.cpp
 * Rôle          : Programme de test complet (Voiture + Moteur + Roues)
 * Auteur        : BTS CIEL
 * Version       : 1.0
 * Compilation   : g++ -Wall -pedantic -std=c++11 roue.cpp moteur.cpp voiture.cpp main.cpp -o test_voiture
 ******************************************************************************/

#include <iostream>
#include "voiture.h"

int main()
{
    std::cout << "=== 1. Instanciation du véhicule ===" << std::endl;
    // Création d'une voiture (Marque, Modèle, Cylindrée moteur, Puissance ch, Carburant)
    // Les 4 roues et le moteur sont créés et initialisés automatiquement par composition.
    Cvoiture maVoiture("Peugeot", "308", 1.6f, 120, "Essence");

    std::cout << "\n=== 2. Affichage de l'état initial ===" << std::endl;
    maVoiture.afficher();

    std::cout << "\n=== 3. Tentative d'accélération à l'arrêt (Doit échouer car le moteur est éteint) ===" << std::endl;
    maVoiture.accelerer(30);

    std::cout << "\n=== 4. Démarrage du véhicule ===" << std::endl;
    maVoiture.demarrer();

    std::cout << "\n=== 5. Accélération de 50 km/h ===" << std::endl;
    maVoiture.accelerer(50);
    maVoiture.afficher();

    std::cout << "\n=== 6. Ralentissement de 20 km/h ===" << std::endl;
    maVoiture.ralentir(20);
    maVoiture.afficher();

    std::cout << "\n=== 7. Arrêt complet du véhicule ===" << std::endl;
    maVoiture.arreter();
    
    std::cout << "\n=== 8. Affichage final après arrêt ===" << std::endl;
    maVoiture.afficher();

    std::cout << "=== Fin du programme de test ===" << std::endl;
    return 0;
}