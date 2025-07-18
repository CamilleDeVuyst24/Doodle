//
// Created by Camille De vuyst on 16/07/2025.
//

#include "Random.h"

namespace logic {

    Random::Random() : rng(std::random_device{}()) {}

    Random& Random::getInstance() {
        static Random instance;
        return instance;
    }

    int Random::nextInt(int min, int max) {
        std::uniform_int_distribution<int> dist(min, max);
        return dist(rng);
    }

    float Random::nextFloat(float min, float max) {
        std::uniform_real_distribution<float> dist(min, max);
        return dist(rng);
    }

}