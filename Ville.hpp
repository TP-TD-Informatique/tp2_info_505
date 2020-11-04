#ifndef TP2_VILLE_HPP
#define TP2_VILLE_HPP

class Ville {
public:
    explicit Ville(long id);

public:
    bool equal(Ville const &b) const; // 2 villes sont équivalentes si elles ont le même id

private:
    long const _id;
};

bool operator==(Ville const &a, Ville const &b);

bool operator!=(Ville const &a, Ville const &b);

#endif //TP2_VILLE_HPP
