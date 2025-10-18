#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

#include "CONSTANTS.h"
#include "PowerupManager.h"

class GameManager;

class UI
{
public:
	UI(int lives, GameManager* gameManager);
	~UI();

	void updatePowerupText(std::pair<POWERUPS, float>);
	void lifeLost(int lives);
	void render(sf::RenderWindow& window);

private:
	GameManager* _gameManager;
	
	sf::Font _font;
	sf::Text _powerupText;

	std::vector<sf::CircleShape> _lives;

	static constexpr float LIFE_RADIUS = 15.0f;
	static constexpr float LIFE_PADDING = 20.0f;
};

