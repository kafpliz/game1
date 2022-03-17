#include "game.h"

Game::Game() :
	window(sf::VideoMode(
		static_cast<size_t> (WINDOW_WIDTH),
		static_cast<size_t> (WINDOW_HEIGHT)
	),
		WINDOW_TITLE,
		sf::Style::Titlebar | sf::Style::Close
	),
	player(WINDOW_WIDTH / 2 - 238 / 2.f,
		WINDOW_HEIGHT - 205.f, "player.png")
	
{
	window.setFramerateLimit(60);

}
void Game::play() {
	while (window.isOpen()) {
		check_events();
		update();
		check_collisions();
		draw();
	}
}
void Game::check_events() {
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) window.close();
			}

	}

void Game::update() {
	switch (game_state) {
	case PLAY:
		map.update();
		player.update();
		stand.update();
		break;
	case GAME_OVER:
		break;
	}
}
void Game::draw() {

	window.clear();
	switch (game_state) {

	case PLAY:
		stand.draw(window);
		window.draw(map.getSprite());
		player.draw(window);
		
		break;
	//case GAME_OVER:
	}
	window.display();
}
void Game::check_collisions() {



	

}