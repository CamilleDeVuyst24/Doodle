//
// Created by Camille De vuyst on 05/11/2024.
//

#include "Game.h"
#include "../logic/Stopwatch.h"


namespace view {

    void Game::run() {
        // init player/platform etc.
        world.setPlayer(factory.createPlayer()); // example

        while (window.isOpen()) {
            handleEvents();
            update();
            render();
        }
    }

    void Game::handleEvents() {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            // Optional: handle keyboard input to move player
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                world.getPlayer().moveLeft();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                world.getPlayer().moveRight();
            }
        }
    }

    void Game::update() {
        logic::Stopwatch::getInstance().tick();
        world.update(logic::Stopwatch::getInstance().getDelta());

        // update all views
        for (auto& v : factory.entityViews)
            v->update();
    }

    void Game::render() {
        window.clear();
        for (auto& v : factory.entityViews)
            v->draw(window);
        window.display();
    }

}

