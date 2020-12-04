#pragma once

class Character
{
	int health = 100;
	int dmg;
	float speed;

public:

	void character();
	~Character();

	void update();
};

