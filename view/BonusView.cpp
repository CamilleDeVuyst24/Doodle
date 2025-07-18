//
// Created by Camille De vuyst on 16/07/2025.
//

#include "BonusView.h"

namespace view {

    BonusView::BonusView(logic::Bonus& model) : model(model) {
        model.addObserver(this);
        // sprite.setTexture(...) load bonus texture
    }

    void BonusView::update() {
        sprite.setPosition(model.getX(), model.getY());
    }

    void BonusView::draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }

}

