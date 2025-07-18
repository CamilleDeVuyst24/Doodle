//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_PLATFORMVIEW_H
#define DOODLE_PLATFORMVIEW_H

#pragma once
#include "EntityView.h"
#include "../logic/Platform.h"

namespace view {

    class PlatformView : public EntityView {
    public:
        PlatformView(logic::Platform& model);

        void update() override;                    // Observer: sync position
        void draw(sf::RenderWindow& window) override; // Draw sprite

    private:
        logic::Platform& model;
        sf::Texture texture;
    };

}

#endif //DOODLE_PLATFORMVIEW_H
