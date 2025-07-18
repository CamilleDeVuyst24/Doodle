//
// Created by Camille De vuyst on 16/07/2025.
//

#include "BGTileView.h"

namespace view {

    BGTileView::BGTileView(logic::BGTile& model) : model(model) {
        if (!texture.loadFromFile("assets/background.png")) {
            throw std::runtime_error("Failed to load background_tile.png");
        }
        sprite.setTexture(texture);
        model.addObserver(this);
    }

    void BGTileView::update() {
        sprite.setPosition(model.getX(), model.getY());
    }

    void BGTileView::draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }

}

