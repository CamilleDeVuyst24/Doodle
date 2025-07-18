//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_CAMERA_H
#define DOODLE_CAMERA_H


#pragma once

namespace logic {

    class Camera {
    public:
        void update(float playerY);

        float getOffsetY() const;

    private:
        float focusY = 300.0f;
    };

}


#endif //DOODLE_CAMERA_H
