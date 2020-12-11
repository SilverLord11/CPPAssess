#include<iostream>
#include<stdlib.h>
#include<string>
#include"Character.h"
#include"BattleArena.h"

int choice3;
bool gameOn = true;


Character Eliminator(2, 4, false);
Character Rebel(1, 2, false);
Character Rebel2(1, 3, false);

void battleArena() 
{
	bool battle = true;
	std::cout << "Welcome to the battle arena.\n";
	std::cout << "choose your team: 1 for Eliminators or 2 for Rebels.\n";
	std::cin >> choice3;
	
	switch (choice3) 
	{
	case 1:
		std::cout << "You have chosen: The Eliminators.\n";
		std::cout << "You now have ONE of these elite anti-terrorist soldiers, packing heavy weaponry (2 dmg) and resolute health (4 health).\n";
		std::cout << "Your opponent has TWO terrorists against your stalwart defender, determined to destroy the government you so dearly love.\n";
		break;
	
	case 2:
		std::cout << "You have chosen: The Rebels.\n";
		std::cout << "You now have TWO patriotic workers, one (3 health) slightly more armored than the other (2 health), both carry basic equipment (1 dmg).\n";
		std::cout << "Your opponent faces you off with ONE of the ruthless Eliminators, a bulky automaton of flesh, " <<
			"hellbent on snuffing you, and your resistance, out.\n";
		Eliminator.attked = true;
		break;
	}

	std::cout << "The game will now begin.\n";
	while (battle) 
	{
		if (Eliminator.health > 0 && (Rebel.health > 0 || Rebel2.health > 0)) 
		{
			if (Eliminator.attked == false)
			{
				if (Eliminator.health <= 0) 
				{
					Eliminator.attked = true;
					return;
				}
				else 
				{
					if (Rebel.health <= 0)
					{
						Rebel2.health -= Eliminator.attack;
						Eliminator.attked = true;
						std::cout << "The eliminator unleashes a volley of bullets! (2 dmg)";
						if (Rebel2.health <= 0) 
						{
							std::cout << "The second Rebel is down!\n";
						}
						else 
						{
							std::cout << "The second rebel is at " << Rebel2.health << "health.\n";
						}
						return;
					}
					else
					{
						Rebel.health -= Eliminator.attack;
						Eliminator.attked = true;
						std::cout << "The eliminator unleashes a volley of bullets! (2 dmg)";
						if (Rebel.health <= 0)
						{
							std::cout << "The first Rebel is down!\n";
						}
						else
						{
							std::cout << "The first rebel is at " << Rebel.health << "health.\n";
						}
						return;
					}
				}
			}
			if (Rebel.attked == false)
			{
				if (Rebel.health <= 0) 
				{
					Rebel.attked = true;
					return;
				}
				else 
				{
					Eliminator.health -= Rebel.attack;
					Rebel.attked = true;
					std::cout << "The first rebel gets a chink inside the Eliminator's armor! (1 dmg)";
					if (Eliminator.health <= 0)
					{
						std::cout << "The Eliminator is down!\n";
					}
					else
					{
						std::cout << "The Eliminator is at " << Eliminator.health << "health.\n";
					}
					return;
				}
			}
			if (Rebel2.attked == false)
			{
				if (Rebel2.health <= 0) 
				{
					Rebel2.attked = true;
					return;
				}
				else
				{
					Eliminator.health -= Rebel2.attack;
					Rebel2.attked = true;
					std::cout << "The second rebel swipes the Eliminator! (1 dmg)";
					if (Eliminator.health <= 0)
					{
						std::cout << "The Eliminator is down!\n";
					}
					else
					{
						std::cout << "The Eliminator is at " << Eliminator.health << "health.\n";
					}
					return;
				}
			}
			else if (Eliminator.attked == true && Rebel.attked == true && Rebel2.attked == true) 
			{
				Eliminator.attked = false;
				Rebel.attked = false;
				Rebel2.attked = false;
				return;
				std::cout << "a new round begins.\n";
			}
		}
		else 
		{
			battle = false;
			gameOn = false;
		}
	}
	
}

void gameOver()
{
	if (Rebel.health <= 0 && Rebel2.health <= 0)
	{
		gameOn = false;
		if (choice3 == 2)
		{
			std::cout << "As your men reel back and are summarily executed, you realize the banner of absolutism and order will reign on. The battle has been lost, but the war has only begun.\n";
			std::cout << "Game: Lost.\n";
		}
		else
		{
			std::cout << "as the Terrorists fall to your machine guns, you feel joy as the anarchists are put to rest, once more protecting that which you hold close. Now, onto your next assignment.\n";
			std::cout << "Game: Won!\n";
		}
	}
	else if (Eliminator.health <= 0)
	{
		if (choice3 == 1)
		{
			std::cout << "The Traitors prove too overwhelming, and eventually the Eliminator caves into the fire. The fury in your heart swells as you know this will be a long battle.\n";
			std::cout << "Game: lost.\n";
		}
		else
		{
			std::cout << "Though it was a certainly difficult battle, and casualties have been wrought, you breathe a sigh of relief, as the Eliminators gas mask loses life, you are now on the road to true victory.\n";
			std::cout << "Game: Won!\n";
		}
	}
	std::cout << "Thanks for playing! I hope you enjoyed.\n";
	return;
}

int Main()
{
	while (gameOn)
	{
		battleArena();
	}
	gameOver();
	return 0;
}



