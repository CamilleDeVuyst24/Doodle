//
// Created by Camille De vuyst on 16/07/2025.
//

#include "World.h"

void logic::World::addPlatform(std::unique_ptr<Platform> platform) {
    if (platform->getY() < highestPlatformY) {
        highestPlatformY = platform->getY();
    }
    platforms.push_back(std::move(platform));
}

void logic::World::update(float delta) {
    player->update(delta);

    // Remove platforms that are off-screen (e.g. below 800px)
    platforms.erase(
            std::remove_if(platforms.begin(), platforms.end(),
                           [](const std::unique_ptr<Platform>& p) {
                               return p->getY() > 800.f; // Assuming window height
                           }),
            platforms.end());

    // Spawn new platforms if player moves up high enough
    float playerY = player->getY();
    float spawnThreshold = playerY - 300.f; // how far ahead to spawn

    while (highestPlatformY > spawnThreshold) {
        float newX = static_cast<float>(std::rand() % 800); // width
        float newY = highestPlatformY - 80.f; // spaced 80px apart

        auto newPlatform = std::make_unique<logic::StaticPlatform>();
        newPlatform->setPosition(newX, newY);

        // Update track
        highestPlatformY = newY;

        // Add to world (and View via factory)
        addPlatform(std::move(newPlatform)); // Add to logic world

        // Also make view — make sure Game/factory is connected
        if (factory) {
            factory->createPlatform(newX, newY); // creates view
        } // helper to push PlatformView
    }
}
