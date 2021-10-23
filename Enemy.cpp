#include "Enemy.h"

void Enemy::initenemySprite()
{
	//Resize the enemy
	this->enemySprite.setScale(0.05f, 0.05f);
}

void Enemy::initVariable()
{
	this->enemySpawnTimer = 100.f;
	this->enemySpawnTimer = this->enemySpawnTimerMax;
	this->maxEnemies = 10;

	this->hpMax  = 100;
	this->hp     = this->hpMax;
	this->damage = 25;
}

Enemy::Enemy(float pos_x,float pos_y,Texture* enemyTexture)
{

	this->initenemySprite();
	this->enemySprite.setPosition(pos_x, pos_y);
	this->enemySprite.setTexture(*enemyTexture);
	this->initVariable();
}

Enemy::~Enemy()
{

}

//Accessor
const FloatRect Enemy::getGlobalBounds() const
{
	return this->enemySprite.getGlobalBounds();
}


//Function

void Enemy::update()
{
	this->enemySprite.move(0.f, 2.f);
}

void Enemy::render(RenderTarget* target)
{
	target->draw(this->enemySprite);
}

