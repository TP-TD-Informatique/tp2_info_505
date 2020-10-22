#include "utils.hpp"


namespace utils {

    int randInt(int start, int end) {
        return start + (int) (random() % (end - start));
    }

    double randDouble(double start, double end) {
        return ((double) random() * (end - start) / (double) RAND_MAX - start);
    }

}