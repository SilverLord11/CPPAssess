#pragma once

class Character
{
public:

	int health = 100;
	int attack;
	float speed;

	Character();
	~Character();

	void update();
};

