set(SFML_DIR "/opt/homebrew/Cellar/sfml/2.6.1/lib/cmake/SFML")

find_package(SFML 2.6 REQUIRED COMPONENTS system window graphics network audio)

add_executable(Doodle
        main.cpp
        Game.cpp
        ConcreteFactory.cpp
        PlayerView.cpp
        PlatformView.cpp
        BonusView.cpp
        BGTileView.cpp
        EntityView.cpp
        # add others if you have, like ScoreView.cpp etc.
)

# Include both this folder and logic/
target_include_directories(Doodle PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/logic
)



target_link_libraries(Doodle PRIVATE logic sfml-system sfml-window sfml-graphics sfml-audio sfml-network)