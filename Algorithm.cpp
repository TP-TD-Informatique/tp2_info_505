#include "Algorithm.hpp"

Algorithm::Algorithm()
        : _longueurMin(-1),
          _longueurMinPrec(_longueurMin + Settings::getSeuil() + 1),
          _villes(std::vector<Ville *>(Settings::getNbVille())),
          _arretes(std::vector<Arrete *>(0)),
          _fourmis(std::vector<Fourmi *>(Settings::getNbFourmi())) {
    // Génération des villes
    for (int i = 0; i < Settings::getNbVille(); ++i) {
        _villes[i] = new Ville(i);
    }

    // Génération des arrêtes
    int nbVille = 1;
    for (int i = 0; i < Settings::getNbVille(); ++i) {
        for (int j = nbVille; j < Settings::getNbVille(); ++j)
            _arretes.push_back(new Arrete(utils::randInt(1, 100), _villes[i], _villes[j]));
        nbVille++;
    }

    // Génération des fourmis
    for (int i = 0; i < Settings::getNbFourmi(); ++i) {
        _fourmis[i] = new Fourmi(_villes[utils::randInt(0, Settings::getNbVille())]);
    }
}

Algorithm::~Algorithm() {
    for (auto fourmi : _fourmis) {
        delete fourmi;
    }
    for (auto arrete : _arretes) {
        delete arrete;
    }
    for (auto ville : _villes) {
        delete ville;
    }
}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

void Algorithm::step() {
    _longueurMinPrec = _longueurMin;

    for (auto fourmi : _fourmis) { // Pour chaque fourmi
        while (!fourmi->parcoursComplet()) { // Tant que parcours non complet
            fourmi->deplacement(_arretes);
        }
    }

    // Gestion de l'évaporation
    for (auto arrete : _arretes) {
        arrete->evapore();
    }

    // Dépot de la phéromone
    for (auto fourmi : _fourmis) {
        for (auto arrete : fourmi->getArretes()) {
            arrete->depot(*fourmi);
        }
    }

    // Conservation du meilleur chemin
    for (auto fourmi : _fourmis) {
        if (fourmi->longueurVoyage() < _longueurMin || _longueurMin == -1) {
            _longueurMin = fourmi->longueurVoyage();
        }
    }
}

bool Algorithm::needStep() const {
    return true;
    //return _longueurMinPrec - _longueurMin > Settings::getSeuil();
}

double Algorithm::getLongueurMin() const {
    return _longueurMin;
}
