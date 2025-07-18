//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_BGTILEVIEW_H
#define DOODLE_BGTILEVIEW_H

#pragma once
#include "EntityView.h"
#include "../logic/BGTile.h"

namespace view {

    class BGTileView : public EntityView {
    public:
        BGTileView(logic::BGTile& model);

        void update() override;
        void draw(sf::RenderWindow& window) override;

    private:
        logic::BGTile& model;
        sf::Texture texture;
    };

}


#endif //DOODLE_BGTILEVIEW_H
