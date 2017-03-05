#include <iostream>
#include <cmath>

int additionWithoutCarrying(int a, int b) 
{
	int result = 0;
	int count = 0;
	while(a > 0 || b > 0)
	{
		int c1 = a % 10;
		int c2 = b % 10;
		int sum = (c1 + c2) % 10;
		if(sum == 0 && result == 0)
			count++;
		result = result * 10 + sum;
		a = a / 10;
		b = b / 10;
	}
	int final = 0;
	while(result > 0)
	{
		int c = result % 10;
		final = final * 10 + c;
		result = result / 10;
	}
	if(count == 0)
		return final;
	return final * pow(10, count);
}


int main()
{
	int param1, param2;
	std::cin >> param1 >> param2;

	std::cout << additionWithoutCarrying(param1, param2);

	std::cout << std::endl;
	return 0;
}
