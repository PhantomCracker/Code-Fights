#include <iostream>

int magicalWell(int a, int b, int n) 
{
	long int money = 0;
	for(int i = 0; i < n; i++, a++, b++)
		money = money + a * b;
	return money;
}


int main()
{
	int a, b, n;
	std::cin >> a >> b >> n;

	std::cout << magicalWell(a, b, n);

	std::cout << std::endl;
	return 0;
}