//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_ENTITY_H
#define DOODLE_ENTITY_H

#pragma once
#include "Subject.h"

namespace logic {

// Abstract base for all game models that can be observed
    class EntityModel : public Subject {
    public:
        virtual ~EntityModel() = default;
        virtual void update(float delta) = 0;

        float getX() const { return x; }
        float getY() const { return y; }

    protected:
        float x{0}, y{0};
    };

}


#endif //DOODLE_ENTITY_H
