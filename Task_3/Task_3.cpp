#include <iostream>

bool IsPrime(int number)
{
	for (int i = number; i > 0; i--)
	{
		if (i != 1 && i != number)
		{
			if (number % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
    std::cout << ">>> IsPrime(17)\n";
	std::cout << std::boolalpha << IsPrime(17) << "\n";
}