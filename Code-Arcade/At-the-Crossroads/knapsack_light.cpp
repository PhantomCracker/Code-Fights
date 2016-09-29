#include <iostream>

int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW)
{
	if(maxW < weight1 && maxW < weight2)
		return 0;

	int r1 = maxW - weight1;
	int r2 = maxW - weight2;
	if(value1 > value2 && r1 > 0)
	{
		int r1 = maxW - weight1;
		if(r1 >= weight2)
			return value1 + value2;
		else
			return value1;
	}
	else if(value1 <= value2 && r2 > 0)
	{
		int r2 = maxW - weight2;
		if(r2 >= weight1)
			return value1 + value2;
		else
			return value2;
	}
	else if(r1 == 0)
		return value1;
	else if(r2 == 0)
		return value2;
}

int main()
{
	int value1, weight1, value2, weight2, maxW;
	std::cin >> value1 >> weight1 >> value2 >> weight2 >> maxW;

	std::cout << knapsackLight(value1, weight1, value2, weight2, maxW);

	std::cout << std::endl;
	return 0;
}