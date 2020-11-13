#include "Fourmi.hpp"

Fourmi::Fourmi(Ville *ville) :
        _ville(ville), _visitedVille(std::vector<Ville *>(0)), _arretes(std::vector<Arrete *>(0)) {
    _visitedVille.push_back(ville);
}

Fourmi::~Fourmi() {
    _ville = nullptr;
}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

Fourmi *Fourmi::deplacement(const std::vector<Arrete *> &arretes) {
    std::vector<Arrete *> depart; // Toutes les arrêtes ou on peut aller
    for (auto arrete : arretes) {
        if (arrete->containsVille(*_ville)) {
            bool visited = false;
            for (auto ville : _visitedVille) {
                if (arrete->containsVille(*ville) && *_ville != *ville) {
                    visited = true;
                    break;
                }
            }
            if (!visited) {
                depart.push_back(arrete);
            }
        }
    }

    double sommePoids = 0;
    for (auto arrete : depart) // Calcul de la somme des poids
        sommePoids += pow(arrete->getPheromone(), Settings::getA()) * pow(arrete->getLongueur(), Settings::getB());

    // Calcul des poids de chaque arrêtes
    std::map<Arrete *, int> p = std::map<Arrete *, int>();
    for (auto arrete : depart) {
        double poids = sommePoids == 0 ? 0 : (pow(arrete->getPheromone(), Settings::getA()) * pow(arrete->getLongueur(), Settings::getB())) / sommePoids;
        p.emplace(arrete, poids);
    }

    // Tirage aléatoire
    Arrete *a;
    double n = utils::randDouble(0, sommePoids);
    for (auto it : p) {
        n -= it.second;
        if (n <= 0) {
            a = it.first;
            break;
        }
    }

    Ville *ville = a->villeSuivante(*_ville); // On va à la ville suivante
    _arretes.push_back(a); // On ajoute l'arrête utilisé
    _visitedVille.push_back(ville); // On ajoute la ville visitée
    _ville = ville; // On est dans la nouvelle ville

    return this;
}

bool Fourmi::parcoursComplet() const {
    return _visitedVille.size() == Settings::getNbVille();
}

double Fourmi::longueurVoyage() const {
    double longueur = 0;
    for (auto arrete : _arretes)
        longueur += arrete->getLongueur();

    return longueur;
}

void Fourmi::reset() {
    _visitedVille = std::vector<Ville *>(0);
    _arretes = std::vector<Arrete *>(0);
}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

const std::vector<Arrete *> &Fourmi::getArretes() const {
    return _arretes;
}

