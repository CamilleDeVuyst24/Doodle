//
// Created by Camille De vuyst on 16/07/2025.
//

#include "Score.h"

namespace logic {

    void Score::update() {
        // Update score based on new game state
        score += 1; // Dummy
    }

    int Score::getCurrentScore() const {
        return score;
    }

}
