//
// Created by Camille De vuyst on 05/11/2024.
//

#include "Game.h"
#include "../logic/Stopwatch.h"


namespace view {

    void Game::run() {
        // init player/platform etc.
        //factory.setWorld(&world);

        factory.createBGTile();
        world.setFactory(&factory);
        world.setPlayer(factory.createPlayer());
        for (int i = 0; i < 10; ++i) {
            float x = static_cast<float>(std::rand() % 800);
            float y = 700.f - i * 80.f;
            world.addPlatform(factory.createPlatform(x, y));
        }


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

