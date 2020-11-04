#ifndef TP2_VILLE_HPP
#define TP2_VILLE_HPP

#include <cmath>

class Ville {
public:
    Ville(long id, double x, double y);

public:
    bool equal(Ville const &b) const; // 2 villes sont équivalentes si elles ont le même id

    double distance(Ville const &b) const;

    const double getX() const;

    const double getY() const;

private:
    long const _id;
    double const _x;
    double const _y;
};

bool operator==(Ville const &a, Ville const &b);

bool operator!=(Ville const &a, Ville const &b);

#endif //TP2_VILLE_HPP
