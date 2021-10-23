#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include <iostream>

using namespace sf;

class Enemy
{
private:

	//Game logic
	float enemySpawnTimer;
	float enemySpawnTimerMax;
	int maxEnemies;

	int hp;
	int hpMax;
	int damage;

	//Game objects
	//enemy
	Texture* enemyTexture;
	Sprite enemySprite;

	void initenemySprite();
	void initVariable();


public:
	Enemy(float pos_x, float pos_y,Texture* enemyTexture);
	virtual ~Enemy();

	//Accessor
	inline Vector2f getPos()
	{
		return this->enemySprite.getPosition();
	}
	const FloatRect getGlobalBounds() const;

	//Function
	
	void spawnEnemy();
	void update();
	void render(RenderTarget* target);

};


#endif //ENEMY_H