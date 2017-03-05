#include <iostream>
#include <vector>

std::vector<int> metroCard(int lastNumberOfDays) 
{
	std::vector <int> days;
	if(lastNumberOfDays == 31)
	{
		days.push_back(28);
		days.push_back(30);
		days.push_back(31);
	}
	else
		days.push_back(31);
	return days;
}


int main()
{
	int lastNumberOfDays;
	std::cin >> lastNumberOfDays;

	metroCard(lastNumberOfDays);

	std::cout << std::endl;
	return 0;
}
