//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_ENTITYVIEW_H
#define DOODLE_ENTITYVIEW_H


#pragma once
#include <SFML/Graphics.hpp>
#include "../logic/Observer.h"

namespace view {

    class EntityView : public logic::Observer {
    public:
        virtual ~EntityView() = default;

        virtual void draw(sf::RenderWindow& window) = 0;
        virtual void update() override = 0; // sync view position

    protected:
        sf::Sprite sprite;
    };

}


#endif //DOODLE_ENTITYVIEW_H
