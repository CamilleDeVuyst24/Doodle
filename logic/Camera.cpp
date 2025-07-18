//
// Created by Camille De vuyst on 16/07/2025.
//

#include "Camera.h"

namespace logic {

    void Camera::update(float playerY) {
        if (playerY < focusY)
            focusY = playerY;
    }

    float Camera::getOffsetY() const {
        return focusY;
    }

}
