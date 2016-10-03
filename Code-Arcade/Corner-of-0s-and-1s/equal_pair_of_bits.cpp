#include <iostream>

int equalPairOfBits(int n, int m) 
{
  return n - ~m & ~m - n ;
}

int main()
{
	int n, m;

	std::cout << equalPairOfBits(n, m);

	std::cout << std::endl;
	return 0;
}