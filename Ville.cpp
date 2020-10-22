#include "Ville.hpp"

Ville::Ville(long id) : _id(id) {}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

bool Ville::equal(const Ville &b) const {
    return _id == b._id;
}

// _.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-._.-.

bool operator==(Ville const &a, Ville const &b) {
    return a.equal(b);
}

bool operator!=(Ville const &a, Ville const &b) {
    return !(a == b);
}