//
// Created by Camille De vuyst on 16/07/2025.
//

#include "PlayerView.h"
#include <stdexcept>

namespace view {

    PlayerView::PlayerView(logic::Player& model) : model(model) {
        if (!texture.loadFromFile("resources/player.png")) {
            throw std::runtime_error("Failed to load player.png");
        }
        sprite.setTexture(texture);
        model.addObserver(this);
    }

    void PlayerView::update() {
        sprite.setPosition(model.getX(), model.getY() - cameraOffsetY);
    }


    void PlayerView::draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }

}