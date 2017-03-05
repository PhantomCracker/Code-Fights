#include <iostream>

int add(int param1, int param2)
{
	return param1 + param2;
}

int main()
{
	int param1, param2;
	std::cin >> param1 >> param2;
	std::cout << add(param1, param2);
	std::cout << std::endl;
	return 0;
}