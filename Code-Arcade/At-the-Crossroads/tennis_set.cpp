#include <iostream>

bool tennisSet(int score1, int score2)
{
	if((score1 == 6 && score2 < 5) || (score2 == 6 && score1 < 5))
		return true;
	else if((score1 >= 5 && score2 == 7 && score1 < 7) || (score1 == 7 && score2 >= 5 && score2 < 7))
		return true;
	return false;
}

int main()
{
	int score1, score2;
	std::cin >> score1 >> score2;

	std::cout << tennisSet(score1, score2);

	std::cout << std::endl;
	return 0;
}