#pragma once
#include<iostream>
#include<vector>
#include"Player.h"
#include"Enemy.h"
#include "Bullet.h"
#include<ctime>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
using namespace std;
/*
	Class that acts the game engine
*/

class Game
{
private:
	//Variable

	//Window
	//vector<Background> backgrounds;
	RenderWindow* window;
	VideoMode videoMode;
	RectangleShape bg;
	Texture bgTexture;
	Sprite bgSprite;
	Event ev;

	//Bullet
	vector<Bullet> bullets;

	//Player
	Texture playerTexture;
	vector<Player> player;

	//Enemies
	float spawmTimer;
	float spawmTimerMax;
	vector<Enemy> enemies;
	Texture enemyTexture; 
	Texture bulletTexture;

	int level;

	//Enemy* enemy;


	//Private function
	void initVariables();
	void initWindow();

	void initPlayer();
	void initEnemies();

public:
	//Constructor/Destructors
	Game();
	virtual ~Game();

	//Accessors
	const bool running() const;

	//Bullet

	//Function 
	void pollEvents();
	void updateEnemies();
	void updateCombat();
	void update(float deltaTime);
	void render();
};
