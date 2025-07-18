//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_SCORE_H
#define DOODLE_SCORE_H


#pragma once
#include "Observer.h"

namespace logic {

    class Score : public Observer {
    public:
        void update() override; // Called when player/world state changes
        int getCurrentScore() const;

    private:
        int score{0};
    };

}

#endif //DOODLE_SCORE_H
