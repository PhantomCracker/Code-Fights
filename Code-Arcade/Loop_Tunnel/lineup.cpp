#include <iostream>
#include <string>
#include <cmath>

int lineUp(std::string commands) 
{
	int same_direction = 0;
	int student_1 = 0;
	int student_2 = 0;
	for(int i = 0; i < commands.length(); i++)
	{
		if(commands[i] == 'R')
		{
			student_1++;
			student_2--;
		}
		else if(commands[i] == 'L')
		{
			student_1--;
			student_2++;
		}
		else if(commands[i] == 'A')
		{
			student_1 = student_1 + 2;
			student_2 = student_2 - 2;
		}
		if(abs(student_1) % 2 == 0 && (student_2 % 2) == 0)
			same_direction++;
	}
	return same_direction;
}


int main()
{
	std::string commands;
	std::cin >> commands;

	std::cout << lineUp(commands);

	std::cout << std::endl;
	return 0;
}