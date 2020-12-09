#include<iostream>
#include "Character.h"
#include <string>

int main() 
{
	int attack;
	int health;
	std::string name;

	Character::Character();
	{
		int attack = 100;
	}

	void update();
	{

	}

	~Character();
	{
		delete attack;
	}
}