//
// Created by Camille De vuyst on 16/07/2025.
//

#include "BGTileView.h"

namespace view {

    BGTileView::BGTileView(logic::BGTile& model) : model(model) {
        model.addObserver(this);
        // sprite.setTexture(...) load background tile texture
    }

    void BGTileView::update() {
        sprite.setPosition(model.getX(), model.getY());
    }

    void BGTileView::draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }

}

