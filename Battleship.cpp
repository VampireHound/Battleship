#include <iostream>

int main()
{

int ships[4][4] =
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

for (int i = 0; i < 4; i++)
{
	std::cout << "\n";

	for (int j = 0; j < 4; j++)
	{
		if(ships[i][j] == 0 || ships[i][j] == 1)
		{
			std::cout << "O";
		} 
		else if (ships[i][j] == 2)
		{
			std::cout << "X";
		} 
		else
		{
			std::cout << "@";
		}
	}
}

std::cout << "\n";


std::cout << "Choose a row number between 0 and 3: ";
std::cin >> row;

std::cout << "Choose a column number between 0 and 3: ";
std::cin >> column;

if (ships[row][column] == 1)
{
	ships[row][column] = 2;

	hits++;

	std::cout << "Hit! " << (4 - hits) << " left.\n\n";
}
else
{
	ships[row][column] = 3;
	std::cout << "Miss\n\n";
}

numberOfTurns++;
}

std::cout << "Victory!\n";
std::cout << "You won in " << numberOfTurns << " turns";

return 0;
}
