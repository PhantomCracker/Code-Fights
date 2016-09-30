#include <iostream>

int secondRightmostZeroBit(int n) 
{
  return ~(n | (n + 1)) & ((n | (n + 1)) + 1) ;
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << secondRightmostZeroBit(n);

	std::cout << std::endl;
	return 0;
}