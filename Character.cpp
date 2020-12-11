#include<iostream>
#include "Character.h"
#include <string>

	Character::Character(int attack, int health, bool attked)
	{
		this->attack;
		this->health;
		this->attked;
	}

	Character::~Character()
	{
		if (health == 0) 
		{
			std::cout << "the person is defeated!\n";
		}
	}
