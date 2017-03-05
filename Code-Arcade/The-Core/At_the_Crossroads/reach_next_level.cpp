#include <iostream>

bool reachNextLevel(int experience, int threshold, int reward)
{
	if(experience + reward >= threshold)
		return true;
	return false;
}

int main()
{
	int experience, threshold, reward;
	std::cin >> experience >> threshold >> reward;

	std::cout << reachNextLevel(experience, threshold, reward);

	std::cout << std::endl;
	return 0;
}
