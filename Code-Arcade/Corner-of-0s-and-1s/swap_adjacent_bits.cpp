#include <iostream>

int swapAdjacentBits(int n) 
{
  return ((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1) ;
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << swapAdjacentBits(n);

	std::cout << std::endl;
	return 0;
}