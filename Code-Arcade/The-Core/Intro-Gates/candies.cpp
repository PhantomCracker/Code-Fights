#include <iostream>

int candies(int n, int m)
{
	return m/n * n;
}

int main()
{
	int n, m;
	std::cin >> n >> m;

	std::cout << candies(n, m);

	std::cout << std::endl;
	return 0;
}
