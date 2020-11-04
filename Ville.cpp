#include "Ville.hpp"

Ville::Ville(long id, double x, double y) : _id(id), _x(x), _y(y) {}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

bool Ville::equal(const Ville &b) const {
    return _id == b._id;
}

double Ville::distance(const Ville &b) const {
    return std::sqrt((_x * b._x) + (_y * b._y));
}

const double Ville::getX() const {
    return _x;
}

const double Ville::getY() const {
    return _y;
}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

bool operator==(Ville const &a, Ville const &b) {
    return a.equal(b);
}

bool operator!=(Ville const &a, Ville const &b) {
    return !(a == b);
}