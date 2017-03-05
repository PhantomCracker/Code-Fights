#include <iostream>

int circleOfNumbers(int n, int first_number)
{
	int sum = n/2 + first_number;
	if(sum > n)
		return sum - n;
	else if(sum < n)
		return sum;
	else
		return 0;
}

int main()
{
	int n, first_number;
	std::cin >> n >> first_number;

	std::cout << circleOfNumbers(n, first_number);

	std::cout << std::endl;
	return 0;
}
