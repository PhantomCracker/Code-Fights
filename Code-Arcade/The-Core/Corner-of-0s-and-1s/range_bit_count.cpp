#include <iostream>
#include <bitset>

int rangeBitCount(int a, int b)
{
	int number_of_1s = 0;
	for(int i = a; i <= b; i++)
	{
		std::string result = std::bitset<8>(i).to_string();
		for(int j = 0; j < result.length(); j++)
			if(result[j] == '1')
				number_of_1s++;
	}
	return number_of_1s;
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	std::cout << rangeBitCount(a, b);

	std::cout << std::endl;
	return 0;
}
