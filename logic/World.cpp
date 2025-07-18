//
// Created by Camille De vuyst on 16/07/2025.
//

#include "World.h"

namespace logic {

    void World::update(float delta) {
        if (player)
            player->update(delta);
        for (auto& p : platforms)
            p->update(delta);
        for (auto& b : bonuses)
            b->update(delta);
    }

}