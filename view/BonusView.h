//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_BONUSVIEW_H
#define DOODLE_BONUSVIEW_H

#pragma once
#include "EntityView.h"
#include "../logic/Bonus.h"

namespace view {

    class BonusView : public EntityView {
    public:
        BonusView(logic::Bonus& model);

        void update() override;
        void draw(sf::RenderWindow& window) override;

    private:
        logic::Bonus& model;
    };

}


#endif //DOODLE_BONUSVIEW_H
