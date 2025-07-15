#include <iostream>

int main()
{

	bool ships[4][4] = 
	{
	{ 0, 1, 1, 0 },
	{ 0, 0, 0, 0 },
	{ 0, 0, 1, 0 },
	{ 0, 0, 1, 0 }
	};

	int hits = 0;
	int numberOfTurns = 0;

	while (hits < 4) 
	{
		int row, column;

		std::cout << "Selecting coordinates\n";

		std::cout << "Choose a row number between 0 and 3: ";
		std::cin >> row;

		std::cout << "Choose a column number between 0 and 3: ";
		std::cin >> column;

		if (ships[row][column]) 
		{
			ships[row][column] = 0;

			hits++;

			std::cout << "Hit! " << (4 - hits) << " left.\n\n";
		}
		else 
		{
			std::cout << "Miss\n\n";
		}

		numberOfTurns++;
	}

	std::cout << "Victory!\n";
	std::cout << "You won in " << numberOfTurns << " turns";

	return 0;
}