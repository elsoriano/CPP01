#include "Zombie.hpp"
#include <string>

Zombie* ZombieHorde(int N, std::string name);

int main()
{
	const int N = 5;
	std::string baseName = "Max";

	Zombie* horde = ZombieHorde(N, baseName);
	if (!horde)
		return 1;

	for (int i = 0; i < N; ++i)
	{
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}