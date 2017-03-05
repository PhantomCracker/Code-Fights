#include <iostream>

bool willYou(bool young, bool beautiful, bool loved) 
{
	if(loved == true)
	{
		if(young == true && beautiful == true)
			return false;
		else
			return true;
	}
	else if(loved == false)
	{
		if(young == false || beautiful == false)
			return false;
		else
			return true;
	}
}

int main()
{
	bool young, beautiful, loved;
	std::cin >> young >> beautiful >> loved;

	std::cout << willYou(young, beautiful, loved);

	std::cout << std::endl;
	return 0;
}
