//
// Created by Camille De vuyst on 16/07/2025.
//

#include "Player.h"

namespace logic {

    void Player::update(float delta) {
        // Apply gravity & update position
        velocityY += gravity * delta;
        y += velocityY * delta;
        x += velocityX * delta;


        if (x < 0) x = 0;
        if (x > 800) x = 800;

        notify();
    }

    void Player::moveLeft() {
        velocityX = -200.0f; // Dummy value
    }

    void Player::moveRight() {
        velocityX = 200.0f;
    }

}