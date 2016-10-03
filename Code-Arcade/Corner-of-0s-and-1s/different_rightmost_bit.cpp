#include <iostream>

int differentRightMostBit(int n, int m)
{
	return (m ^ n) & -(m ^ n) ;
}

int main()
{
	int n, m;
	std::cin >> n >> m;

	std::cout << differentRightMostBit(n, m);

	std::cout << std::endl;
	return 0;
}