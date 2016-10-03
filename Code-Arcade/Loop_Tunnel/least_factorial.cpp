#include <iostream>

int factorial(int n)
{
	int f = 1;
	for(int i = 1; i <= n; i++)
		f = f * i;
	return f;
}

int leastFactorial(int n) 
{
	for(int i = 1; i <= n; i++)
	{
		if(factorial(i) >= n)
			return factorial(i);
	}
}


int main()
{
	int n;
	std::cin >> n;

	std::cout << leastFactorial(n);

	std::cout << std::endl;
	return 0;
}