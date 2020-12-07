#include<iostream>
#include <stdlib.h>

void guessingGame()
{
	//variable declaration
	bool GameOver = false;
	std::cout << "Welcome To the numbers game. \n";
	int min = 0;
	int max = 1000;
	int guess = (min + max)/2;
	int choice;

	//These are the controls for player input
	std::cout << "I will try to guess the correct answer from 1 to 1000 \n";
	std::cout << "The controls are '1' for higher, '2' for lower, and '3' for the answer \n";

	while (!GameOver) 
	{
		std::cout << "Is your number " << guess << "?\n";
		
		//takes the player input
		std::cin >> choice;

		//switch case to get how the commands update the game
		switch (choice)
		{
			case 1:
				min = guess;
				guess = (max + min) / 2;
				break;
			case 2:
				max = guess;
				guess = (max + min) / 2;
				break;
			case 3:
				std::cout << "I win! Thank you for playing";
				GameOver = true;
				break;

		}
	}
}