#pragma once
#include "raylib.h"

class Character
{
	int health = 100;
	int dmg;
	float speed;

public:

	void character();
	~character();

	void update();
};

