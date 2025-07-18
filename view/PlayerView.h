//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_PLAYERVIEW_H
#define DOODLE_PLAYERVIEW_H

#pragma once
#include "EntityView.h"
#include "../logic/Player.h"
#include "../logic/Observer.h"


namespace view {

    class PlayerView : public EntityView  {
    public:
        PlayerView(logic::Player& model);
        void update() override;
        void draw(sf::RenderWindow& window) override;


    private:
        logic::Player& model;
        sf::Sprite sprite;
        sf::Texture texture;
    };


}


#endif //DOODLE_PLAYERVIEW_H
