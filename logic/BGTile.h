//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_BGTILE_H
#define DOODLE_BGTILE_H


#pragma once
#include "EntityModel.h"

namespace logic {

    class BGTile : public EntityModel {
    public:
        void update(float delta) override {
            // usually static, maybe scrolls
        }
    };

}


#endif //DOODLE_BGTILE_H
