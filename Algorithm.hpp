#ifndef TP2_ALGORITHM_HPP
#define TP2_ALGORITHM_HPP

#include <vector>

#include "Ville.hpp"
#include "Arrete.hpp"
#include "Fourmi.hpp"
#include "Settings.hpp"

#define CANVAS_WIDTH 800
#define CANVAS_HEIGHT 600

class Algorithm {
public:
    Algorithm();

    ~Algorithm();

public:
    void step();

    bool needStep() const;

    double getLongueurMin() const;

    const std::vector<Ville *> &getVilles() const;

    const std::vector<Arrete *> &getArretes() const;

private:
    std::vector<Ville *> _villes;
    std::vector<Arrete *> _arretes;
    std::vector<Fourmi *> _fourmis;
    double _longueurMin;
    double _longueurMinPrec;
};


#endif //TP2_ALGORITHM_HPP
