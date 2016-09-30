#include <iostream>

int killKthBit(unsigned long int n, int k)
{
	return n ^= (1 ^ n) & (1 << k-1);
}

int main()
{
	unsigned long int n; 
	int k;
	std::cin >> n >> k;

	std::cout << killKthBit(n, k);

	std::cout << std::endl;
	return 0;
}