#include <iostream>

long long int extraNumber(long long int a, long long int b, long long int c)
{
	if(a == b)
		return c;
	else if(a == c)
		return b;
	return a;
}

int main()
{
	long long int a, b, c;
	std::cin >> a >> b >> c;

	std::cout << extraNumber(a, b, c);

	std::cout << std::endl;
	return 0;
}