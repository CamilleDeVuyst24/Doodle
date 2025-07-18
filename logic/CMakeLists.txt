add_library(logic STATIC
        Stopwatch.cpp
        Random.cpp
        Player.cpp
        Platform.cpp
        Bonus.cpp
        World.cpp
        BGTile.cpp
        Camera.cpp
        EntityModel.cpp
        Factory.cpp
        Observer.cpp
        Score.cpp
        Subject.cpp

)

target_include_directories(logic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

find_package(SFML 2.6 REQUIRED COMPONENTS system window graphics network audio)

target_link_libraries(logic PUBLIC
        sfml-system
        sfml-window
        sfml-graphics
        sfml-audio
        sfml-network
)