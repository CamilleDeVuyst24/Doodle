//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_PLATFORM_H
#define DOODLE_PLATFORM_H

#pragma once
#include "EntityModel.h"


namespace logic {

    enum class PlatformType { Static };

    class Platform : public EntityModel {
    public:
        virtual PlatformType getType() const = 0;
    };

    class StaticPlatform : public Platform {
    public:
        PlatformType getType() const override { return PlatformType::Static; }
        void update(float) override {} // Static platform doesn't move
    };

}


#endif //DOODLE_PLATFORM_H
