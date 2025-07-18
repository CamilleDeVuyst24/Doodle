//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_WORLD_H
#define DOODLE_WORLD_H

#pragma once
#include <vector>
#include <memory>
#include "Player.h"
#include "Platform.h"
#include "Bonus.h"
#include "../view/ConcreteFactory.h"



namespace logic {

    class World {
    public:
        void update(float delta);
        void setPlayer(std::unique_ptr<Player> p) { player = std::move(p); }
        Player& getPlayer() { return *player; }

        void addPlatform(std::unique_ptr<Platform> p);
        void setFactory(view::ConcreteFactory* f) { factory = f; }

    private:
        std::unique_ptr<Player> player;
        std::vector<std::unique_ptr<Platform >> platforms;
        std::vector<std::unique_ptr<Bonus>> bonuses;

        view::ConcreteFactory* factory = nullptr;

        float highestPlatformY = 0.f;
    };

}


#endif //DOODLE_WORLD_H
