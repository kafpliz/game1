#pragma once
#include "settings.h"
#include "SFML/Graphics.hpp"
#include "player.h"
#include <vector>
#include "map.h"
#include "stand.h"


class Game {
public:
	enum GameState { INTRO, PLAY, PAUSE, GAME_OVER };
	Game();
	void play();
private:
	void check_events();
	void update();
	void draw();
	void check_collisions();

	sf::RenderWindow window;
	Player player;
	Map map;
	Stand stand;
	GameState game_state = PLAY;
	//Splash game_over;


	sf::Clock clock;

};