#ifndef TP2_ARRETE_HPP
#define TP2_ARRETE_HPP

#include "Ville.hpp"

#define Q 1
#define C 0.7

class Fourmi;

class Arrete {
public:
    Arrete(double longueur, const Ville *ville1, const Ville *ville2);

    ~Arrete();

public:
    double getLongueur() const;

    double getPheromone() const;

public:
    bool containsVille(const Ville &ville);

    Ville *villeSuivante(const Ville &ville);

    Arrete *evapore();

    Arrete *depot(Fourmi const &fourmi);

private:
    double const _longueur;
    Ville const *_ville1;
    Ville const *_ville2;
    double _pheromone;
};


#endif //TP2_ARRETE_HPP
