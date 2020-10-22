#ifndef TP2_FOURMI_HPP
#define TP2_FOURMI_HPP

#include <vector>
#include <map>
#include <cmath>

#include "Arrete.hpp"
#include "utils.hpp"

#define NB_FOURMI 1000
#define A 1
#define B 1


class Fourmi {
public:
    explicit Fourmi(Ville *ville);

    ~Fourmi();

public:
    Fourmi *deplacement(const std::vector<Arrete *> &arretes);

    bool parcoursComplet() const;

    double longueurVoyage() const;

public:
    const std::vector<Arrete *> &getArretes() const;

private:
    Ville *_ville;
    std::vector<Ville *> _visitedVille;
    std::vector<Arrete *> _arretes;
};


#endif //TP2_FOURMI_HPP