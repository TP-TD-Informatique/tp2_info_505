#ifndef TP2_UTILS_HPP
#define TP2_UTILS_HPP

#include <random>
#include <sstream>

namespace utils {

    int randInt(int start, int end); // Génère un entier aléatoire dans l'interval [start,end[

    double randDouble(double start, double end); // Génère un double aléatoire dans l'interval [start,end[

    template<typename T>
    std::string toString(T arg) {
        std::stringstream ss;
        ss << arg;
        std::string res;
        ss >> res;
        return res;
    }
}

#endif //TP2_UTILS_HPP
