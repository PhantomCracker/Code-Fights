#include <iostream>
#include <cmath>

int phoneCall(int min1, int min2_10, int min11, int S)
{
	int total;
	total = min1 + 9 * min2_10;
	if(S < min1)
		return 0;
	else if(S > total)
	{
		S = S - total;
		return 10 + (int)floor(S / min11);
	}
	else if(S == total)
		return 10;
	else if(S < total)
	{
		S = S - min1;
		return 1 + (int)floor(S / min2_10);
	}
}

int main()
{
	int min1, min2_10, min11, S;
	std::cin >> min1 >> min2_10 >> min11 >> S;

	std::cout << phoneCall(min1, min2_10, min11, S);

	std::cout << std::endl;
	return 0;
}
