#include "Arrete.hpp"
#include "Fourmi.hpp"

Arrete::Arrete(const double longueur, const Ville *ville1, const Ville *ville2) :
        _longueur(longueur), _ville1(ville1), _ville2(ville2) {
    _pheromone = 0;
}

Arrete::~Arrete() {
    _ville1 = _ville2 = nullptr;
}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

bool Arrete::containsVille(const Ville &ville) {
    return *_ville1 == ville || *_ville2 == ville;
}

Ville *Arrete::villeSuivante(const Ville &ville) {
    return const_cast<Ville *>(*_ville1 == ville ? _ville2 : _ville1);
}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

double Arrete::getLongueur() const {
    return _longueur;
}

double Arrete::getPheromone() const {
    return _pheromone;
}

Arrete * Arrete::evapore() {
    _pheromone = Settings::getC() * _pheromone;

    return this;
}

Arrete * Arrete::depot(const Fourmi &fourmi) {
    _pheromone += Settings::getQ() / fourmi.longueurVoyage();

    return this;
}

const Ville *Arrete::getVille1() const {
    return _ville1;
}

const Ville *Arrete::getVille2() const {
    return _ville2;
}
