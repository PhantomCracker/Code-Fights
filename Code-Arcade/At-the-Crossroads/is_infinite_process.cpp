#include <iostream>

bool isInfiniteProcess(int a, int b)
{
	if(a == b)
		return false;
	int difference = b - a;
	if(difference > 2)
	{
		if(difference % 2 == 0)
			return false;
		return true;
	}
	return true;
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	std::cout << isInfiniteProcess(a, b);

	std::cout << std::endl;
	return 0;
}