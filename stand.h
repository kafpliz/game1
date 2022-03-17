#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
#include <list>

class Stand {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f speed = sf::Vector2f(0.0f, 3.0f);
public:
	Stand() {
		texture.loadFromFile("stand.png");
		sprite.setTexture(texture);
	}
	sf::Sprite getSprite() { return sprite; }
		
	void update(){}

};