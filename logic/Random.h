//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_RANDOM_H
#define DOODLE_RANDOM_H

#pragma once
#include <random>

namespace logic {

    class Random {

    public:
        static Random &getInstance();

        int nextInt(int min, int max);

        float nextFloat(float min, float max);

    private:
        Random();

        std::mt19937 rng;

        Random(const Random &) = delete;

        Random &operator=(const Random &) = delete;

    };
}


#endif //DOODLE_RANDOM_H
