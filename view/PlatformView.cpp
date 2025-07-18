//
// Created by Camille De vuyst on 16/07/2025.
//

#include "PlatformView.h"



namespace view {

    PlatformView::PlatformView(logic::Platform& model) : model(model) {
        // Add as observer
        model.addObserver(this);

        // sprite.setTexture(...) load platform texture
        // e.g. sprite.setTexture(platformTexture);
    }

    void PlatformView::update() {
        // Sync sprite to model's coordinates
        sprite.setPosition(model.getX(), model.getY());
    }

    void PlatformView::draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }

}
