//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_BONUS_H
#define DOODLE_BONUS_H

#pragma once
#include "EntityModel.h"

namespace logic {

    class Player; // Forward declare

    class Bonus : public EntityModel {
    public:
        virtual void applyTo(Player& player) = 0;
    };

    class Spring : public Bonus {
    public:
        void applyTo(Player& player) override;
        void update(float delta) override;   // <-- add this
    };

}

#endif //DOODLE_BONUS_H
