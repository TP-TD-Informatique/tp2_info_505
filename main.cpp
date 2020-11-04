#include <iostream>
#include <vector>

#include "Settings.hpp"
#include "Arrete.hpp"
#include "Fourmi.hpp"
#include "Window.hpp"
#include "utils.hpp"


int main(int argc, char **argv) {
    srand(time(nullptr));
    Settings::setNbVille(100);
    Settings::setNbFourmi(10);
    Settings::setA(1.0);
    Settings::setB(1.0);
    Settings::setSeuil(10.0);
    Settings::setC(0.7);
    Settings::setQ(1.0);

    time_t t = time(nullptr);

    // Génération des villes
    std::vector<Ville *> villes = std::vector<Ville *>(Settings::getNbVille());
    for (int i = 0; i < Settings::getNbVille(); ++i)
        villes[i] = new Ville(i);
    // Génération des arrètes
    std::vector<Arrete *> arretes = std::vector<Arrete *>(0);
    int nbVille = 1;
    for (int i = 0; i < Settings::getNbVille(); ++i) {
        for (int j = nbVille; j < Settings::getNbVille(); ++j)
            arretes.push_back(new Arrete(utils::randInt(1, 100), villes[i], villes[j]));
        nbVille++;
    }

    // Création de la fenêtre
    auto *window = new Window(argc, argv);

    // Génération des fourmis
    std::vector<Fourmi *> fourmis = std::vector<Fourmi *>(Settings::getNbFourmi());
    for (int i = 0; i < Settings::getNbFourmi(); ++i) {
        fourmis[i] = new Fourmi(villes[utils::randInt(0, Settings::getNbVille())]);
    }

    double longueurMin = -1;
    double longueurMinPrec;

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
    } while (longueurMinPrec - longueurMin > Settings::getSeuil());

    std::cout << "Meilleure longueur : " << longueurMin << std::endl;
    std::cout << "Temps de calcul : " << difftime(time(nullptr), t) << "s" << std::endl;

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
    delete window;

    return 0;
}
