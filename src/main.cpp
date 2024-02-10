#include "2Dvector.h"
#include <SFML/Graphics.hpp>
#include <iostream>

void run() {
    const int wWidth = 1280;
    const int wHight = 720;
    sf::RenderWindow window(sf::VideoMode(wWidth, wHight), "chomper");
    window.setFramerateLimit(60);

    sf::Clock deltaClock;
    const double timestep = 0.002;
    double accumulator = 0.0;

    // Frame based update
    while (window.isOpen()) {
        accumulator += deltaClock.restart().asSeconds();

        // Fixed timestep update
        while (accumulator >= timestep) {
            accumulator -= timestep;
        }

        window.clear();
        // window.draw();
        window.display();
    }
}

int main(int argc, char *argv[]) {
    // run();
    vector2 vec1 = vector2(100, 100);
    vector2 vec2 = vector2(100, 100);
    std::cout << vec1.y << vec1.x << "\n";
}
