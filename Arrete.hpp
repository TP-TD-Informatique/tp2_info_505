#ifndef TP2_ARRETE_HPP
#define TP2_ARRETE_HPP

#include "Settings.hpp"
#include "Ville.hpp"

class Fourmi; // Pour résoudre les problèmes de l'inclusion cyclique

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

    const Ville *getVille1() const;

    const Ville *getVille2() const;

private:
    double const _longueur;
    Ville const *_ville1;
    Ville const *_ville2;
    double _pheromone;
};


#endif //TP2_ARRETE_HPP
