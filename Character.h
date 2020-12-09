#pragma once
#include<string>

class Character
{
	public:

	int health = 100;
	int attack;
	float speed;
	std::string name;

	Character();
	~Character();

	void update();
};

