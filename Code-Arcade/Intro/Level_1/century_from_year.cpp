#include <iostream>

int centuryFromYear(int year)
{
	if(year >= 1 && year <= 2005)
	{
		if(year % 100 == 0)
			return (year / 100);
		else
			return (year / 100 + 1);
	}
}

int main()
{
	int year;
	std::cin >> year;
	std::cout << centuryFromYear(year);
	std::cout << std::endl;
	return 0;
}