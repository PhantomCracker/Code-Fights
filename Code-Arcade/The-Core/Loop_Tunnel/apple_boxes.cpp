#include <iostream>

int appleBoxes(int k) 
{
	int red_apples = 0;
	int yellow_apples = 0;
	for(int i = 1; i <= k; i++)
	{
		if(i % 2 != 0)
			yellow_apples = yellow_apples + i * i;
		else
			red_apples = red_apples + i * i;
	}
	return red_apples - yellow_apples;
}


int main()
{
	int k;
	std::cin >> k;

	std::cout << appleBoxes(k);

	std::cout << std::endl;
	return 0;
}
