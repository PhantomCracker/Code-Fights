#include <iostream>

int solution(int value)
{
	int p = 10;
	while(value > p)
	{
		if((value % p) / (p / 10) < 5)
			value = (value / p) * p;
		else
			value = (value / p + 1) * p;
		p = p * 10;
	}
	return value;
}

int main()
{
	std::cout << std::endl;
	return 0;
}