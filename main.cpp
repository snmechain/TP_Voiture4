/******************************************************************************
 * Nom du fichier : main.cpp
 * Rôle          : Programme principal testant le projet complet (Voiture + Moteur + Roues)
 * Compilation   : g++ -Wall -pedantic -std=c++11 roue.cpp moteur.cpp voiture.cpp main.cpp -o application_voiture
 ******************************************************************************/

#include <iostream>
#include "voiture.h"

int main()
{
    // 1. Instanciation d'une voiture (ex: Peugeot 308, moteur 1.6L, 120ch, Essence)
    Cvoiture maVoiture("Peugeot", "308", 1.6f, 120, "Essence");

    // 2. Affichage initial
    maVoiture.afficher();

    // 3. Démarrage du véhicule
    maVoiture.demarrer();

    // 4. Accélération
    maVoiture.accelerer(50);

    // 5. Ralentissement
    maVoiture.ralentir(20);

    // 6. Arrêt de la voiture
    maVoiture.arreter();

    // Affichage final avant la destruction des objets
    maVoiture.afficher();

    return 0;
}