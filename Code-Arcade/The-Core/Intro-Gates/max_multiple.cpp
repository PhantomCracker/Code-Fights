#include <iostream>

int maxMultiple(int divisor, int bound)
{
	int N = 1;
	for(int i = 1; i <= bound; i++)
		if(i % divisor == 0 && i > N)
			N = i;

		return N;
}

int main()
{
	int divisor, bound;
	std::cin >> divisor >> bound;

	std::cout << maxMultiple(divisor, bound);

	std::cout << std::endl;
	return 0;
}
