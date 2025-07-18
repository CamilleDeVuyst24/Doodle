//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_STOPWATCH_H
#define DOODLE_STOPWATCH_H

#include <iostream>
#include <chrono>
#pragma once
using namespace std;

namespace logic {

    class Stopwatch {

    public:
        static Stopwatch &getInstance();

        void tick();

        float getDelta() const;

    private:
        Stopwatch();

        std::chrono::steady_clock::time_point last;
        float delta;

        Stopwatch(const Stopwatch &) = delete;

        Stopwatch &operator=(const Stopwatch &) = delete;


    };
}


#endif //DOODLE_STOPWATCH_H
