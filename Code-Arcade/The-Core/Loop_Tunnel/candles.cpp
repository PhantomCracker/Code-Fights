#include <iostream>

int solution(int solutionNumber, int makeNew)
{
	int burned = 0;
	int leftovers = 0;
	while(solutionNumber > 0)
	{
		burned = burned + solutionNumber;
		leftovers = leftovers + solutionNumber;
		solutionNumber = leftovers / makeNew;
		leftovers = leftovers % makeNew;
	}
	return burned;
}

int main()
{
	std::cout << std::endl;
	return 0;
}