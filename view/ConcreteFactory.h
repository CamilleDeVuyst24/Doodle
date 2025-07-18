//
// Created by Camille De vuyst on 16/07/2025.
//

#ifndef DOODLE_CONCRETEFACTORY_H
#define DOODLE_CONCRETEFACTORY_H

#include "PlayerView.h"
#include "PlatformView.h"
#include "BGTileView.h"
#include "BonusView.h"
#include "../logic/Factory.h"

#include <vector>


namespace view {

    class ConcreteFactory : public logic::AbstractFactory {
    public:
        std::unique_ptr<logic::Player> createPlayer() override;
        std::unique_ptr<logic::Platform> createPlatform(float x, float y) override;
        std::unique_ptr<logic::Bonus> createBonus() override;
        std::unique_ptr<logic::BGTile> createBGTile();

        // keep views
        std::vector<std::unique_ptr<EntityView>> entityViews;
    };

}


#endif //DOODLE_CONCRETEFACTORY_H
