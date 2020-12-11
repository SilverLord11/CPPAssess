#pragma once

class Character
{
	public:

	int health;
	int attack;
	bool attked;

	Character(int attack, int health, bool attked);
	~Character();
};

