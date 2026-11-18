#include "voiture.h"
#include <iostream>

// Constructeur : on initialise les attributs de base et on transmet les paramètres au constructeur du moteur dans la liste d'initialisation
Cvoiture::Cvoiture(std::string ma, std::string mo, float cyl, int puiss, std::string carb)
    : marque(ma), modele(mo), vitesse(0), moteur(cyl, puiss, carb)
{
    // Les 4 roues du tableau Roues[4] sont créées automatiquement ici 
    // via le constructeur par défaut de la classe CRoue.
}

Cvoiture::~Cvoiture()
{
}

void Cvoiture::demarrer()
{
    // On délègue le démarrage au moteur
    moteur.demarrer();
}

void Cvoiture::arreter()
{
    vitesse = 0;
    // On délègue l'arrêt au moteur
    moteur.arreter();
}

void Cvoiture::accelerer(int v)
{
    vitesse += v;
    // On répercute l'accélération sur le régime du moteur
    moteur.accelerer(v * 40); 
}

void Cvoiture::ralentir(int v)
{
    vitesse -= v;
    if (vitesse < 0) vitesse = 0;
}

void Cvoiture::afficher() const
{
    std::cout << "Voiture : " << marque << " " << modele << " (Vitesse : " << vitesse << " km/h)" << std::endl;
    moteur.afficher();      // Affiche les infos du moteur
    afficherRoues();        // Affiche les infos des 4 roues
}

// Méthode pour afficher l'état des 4 roues
void Cvoiture::afficherRoues() const
{
    std::cout << "État des 4 roues :" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        std::cout << "  - Roue " << i << " : ";
        Roues[i].afficher();
    }
}