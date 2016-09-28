#include <iostream>

int largestNumber(int n)
{
	long int number = 0;
	for(int i = 0; i < n; i++)
		number = number * 10 + 9;
	return number;
}

int main()
{
	std::cout << std::endl;
	return 0;
}