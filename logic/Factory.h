//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_FACTORY_H
#define DOODLE_FACTORY_H

#pragma once
#include <memory>
#include "Platform.h"
#include "Bonus.h"
#include "Player.h"


namespace logic {

    class AbstractFactory {
    public:
        virtual ~AbstractFactory() = default;

        virtual std::unique_ptr<Player> createPlayer() = 0;
        virtual std::unique_ptr<Platform> createPlatform(PlatformType type) = 0;
        virtual std::unique_ptr<Bonus> createBonus(/* bonus type */) = 0;
    };

}


#endif //DOODLE_FACTORY_H
