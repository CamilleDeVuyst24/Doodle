//
// Created by Camille De vuyst on 16/07/2025.
//

#include "Stopwatch.h"


namespace logic {

    Stopwatch::Stopwatch() : last(std::chrono::steady_clock::now()), delta(0.0f) {}

    Stopwatch& Stopwatch::getInstance() {
        static Stopwatch instance;
        return instance;
    }

    void Stopwatch::tick() {
        auto now = std::chrono::steady_clock::now();
        delta = std::chrono::duration<float>(now - last).count();
        last = now;
    }

    float Stopwatch::getDelta() const {
        return delta;
    }

}