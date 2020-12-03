#include<iostream>
#include <stdlib.h>

void guessingGame()
{
	bool GameOver = false;
	std::cout << "Welcome To the numbers game. \n";
	int min = 0;
	int max = 1000;
	int guess = (min + max)/2;
	int choice;
	std::cout << "I will try to guess the correct answer from 1 to 1000 \n";
	std::cout << "The controls are '1' for higher, '2' for lower, and '3' for the answer \n";

	while (!GameOver) 
	{
		std::cout << "Is your number " << guess << "?";
		
		std::cin >> choice;
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