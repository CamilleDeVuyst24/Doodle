//
// Created by Camille De vuyst on 16/07/2025.
//

#include "ConcreteFactory.h"

// Logic models
#include "../logic/Player.h"
#include "../logic/Platform.h"
#include "../logic/Bonus.h"
#include "../logic/BGTile.h"

// View classes
#include "PlayerView.h"
#include "PlatformView.h"
#include "BonusView.h"
#include "BGTileView.h"

namespace view {

    std::unique_ptr<logic::Player> ConcreteFactory::createPlayer() {
        auto player = std::make_unique<logic::Player>();
        entityViews.push_back(std::make_unique<PlayerView>(*player));
        return player;
    }

    std::unique_ptr<logic::Platform> ConcreteFactory::createPlatform(float x, float y) {
        auto platform = std::make_unique<logic::StaticPlatform>();
        platform->setPosition(x, y);
        entityViews.push_back(std::make_unique<PlatformView>(*platform));
        return platform;
    }

    std::unique_ptr<logic::Bonus> ConcreteFactory::createBonus() {
        auto bonus = std::make_unique<logic::Spring>();
        entityViews.push_back(std::make_unique<BonusView>(*bonus));
        return bonus;
    }

    std::unique_ptr<logic::BGTile> ConcreteFactory::createBGTile() {
        auto tile = std::make_unique<logic::BGTile>();
        entityViews.push_back(std::make_unique<BGTileView>(*tile));
        return tile;
    }

}
