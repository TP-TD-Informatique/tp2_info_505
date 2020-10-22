#include <iostream>
#include <vector>

#include "Arrete.hpp"
#include "Fourmi.hpp"
#include "utils.hpp"


int main() {
    srand(time(nullptr));
    // Génération des villes
    std::vector<Ville *> villes = std::vector<Ville *>(NB_VILLE);
    for (int i = 0; i < NB_VILLE; ++i)
        villes[i] = new Ville(i);
    // Génération des arrètes
    std::vector<Arrete *> arretes = std::vector<Arrete *>(0);
    int nbVille = 1;
    for (int i = 0; i < NB_VILLE; ++i) {
        for (int j = nbVille; j < NB_VILLE; ++j)
            arretes.push_back(new Arrete(utils::randInt(1, 100), villes[i], villes[j]));
        nbVille++;
    }

    // Génération des fourmis
    std::vector<Fourmi *> fourmis = std::vector<Fourmi *>(NB_FOURMI);
    for (int i = 0; i < NB_FOURMI; ++i) {
        fourmis[i] = new Fourmi(villes[utils::randInt(0, NB_VILLE)]);
    }

    double longueurMin = -1;
    double longueurMinPrec = longueurMin;

    do {
        longueurMinPrec = longueurMin;

        for (auto fourmi : fourmis) { // Pour chaque fourmi
            while (!fourmi->parcoursComplet()) { // Tant que parcours non complet
                fourmi->deplacement(arretes);
            }
        }

        // Gestion de l'évaporation
        for (auto arrete : arretes) {
            arrete->evapore();
        }

        // Dépot de la phéromone
        for (auto fourmi : fourmis) {
            for (auto arrete : fourmi->getArretes()) {
                arrete->depot(*fourmi);
            }
        }

        // Conservation du meilleur chemin
        for (auto fourmi : fourmis) {
            if (fourmi->longueurVoyage() < longueurMin || longueurMin == -1) {
                longueurMin = fourmi->longueurVoyage();
            }
        }
    } while (longueurMinPrec - longueurMin > 10);

    std::cout << "Meilleur longueur : " << longueurMin << std::endl;

    // Nettoyage de la mémoire
    for (auto fourmi : fourmis) {
        delete fourmi;
    }
    for (auto arrete : arretes) {
        delete arrete;
    }
    for (auto ville : villes) {
        delete ville;
    }

    return 0;
}
