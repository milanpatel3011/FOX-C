#ifndef RANDOM_H
#define RANDOM_H

#include <random>
#include <algorithm>

namespace foxc {

    // Random number generator
    int randomInt(int min, int max) {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(min, max);
        return distrib(gen);
    }

    // Shuffle a vector
    template <typename T>
    void shuffle(std::vector<T>& vec) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::shuffle(vec.begin(), vec.end(), gen);
    }

} // namespace foxc

#endif // RANDOM_H