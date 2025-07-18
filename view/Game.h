//
// Created by Camille De vuyst on 05/11/2024.
//

#ifndef DOODLE_GAME_H
#define DOODLE_GAME_H


#pragma once
#include <SFML/Graphics.hpp>
#include "../logic/World.h"
#include "ConcreteFactory.h"

namespace view {

    class Game {
    public:
        void run();

    private:
        sf::RenderWindow window{sf::VideoMode(800, 600), "Doodle Jump"};


        logic::World world;
        ConcreteFactory factory;

        void handleEvents();
        void update();
        void render();
    };

}


#endif //DOODLE_GAME_H
