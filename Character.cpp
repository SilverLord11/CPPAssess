#include<iostream>
#include "Character.h"
#include <string>

	Character::Character()
	{
		int attack = 100; 
	}

	void update() 
	{

	}

	Character::~Character()
	{
		delete[attack];
	}
