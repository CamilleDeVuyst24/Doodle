//
// Created by Camille De vuyst on 16/07/2025.
//

#include "PlatformView.h"
#include <stdexcept>



namespace view {

    PlatformView::PlatformView(logic::Platform& model) : model(model) {
        if (!texture.loadFromFile("assets/platform.png")) {
            throw std::runtime_error("Failed to load platform.png");
        }
        sprite.setTexture(texture);
        model.addObserver(this);


    }

    void PlatformView::update() {
        // Sync sprite to model's coordinates
        sprite.setPosition(model.getX(), model.getY());
    }

    void PlatformView::draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }

}
