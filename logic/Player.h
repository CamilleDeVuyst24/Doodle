//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_PLAYER_H
#define DOODLE_PLAYER_H

#pragma once
#include "EntityModel.h"

namespace logic {

    class Player : public EntityModel {
    public:
        void update(float delta) override;
        void moveLeft();
        void moveRight();

    private:
        float velocityX{0.0f};
        float velocityY{0.0f};
        const float gravity = 800.0f;
    };

}


#endif //DOODLE_PLAYER_H
