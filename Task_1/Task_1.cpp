#include <iostream>

void ShowLine(const int SIZE, char symbol, bool horizontal)
{
	if (horizontal)
	{
		for (int i = 0; i < SIZE; i++)
		{
			std::cout << symbol;
		}
	}
	else
	{
		for (int i = 0; i < SIZE; i++)
		{
			std::cout << symbol << "\n";
		}
	}
}

int main()
{
	std::cout << ">>> ShowLine(5, '@', true)\n";
	ShowLine(5, '@', true);
	std::cout << "\n>>> ShowLine(5, '@', false)\n";
	ShowLine(5, '@', false);
}