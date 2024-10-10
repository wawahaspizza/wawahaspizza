#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "Canvas");
    
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(220, 220, 220);
        
        sf::CircleShape ellipse(140); // radius for the ellipse
        ellipse.setFillColor(sf::Color::Yellow);
        ellipse.setPosition(70, 150); // position for the ellipse

        window.draw(ellipse);
        window.display();
    }

    return 0;
}

