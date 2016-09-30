#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>

std::string decimal_to_binary(int number)
{
	std::string result = "";
	do
	{
		if((number & 1) == 0)
			result += "0";
		else
			result += "1";
		number >>= 1;
	}while(number);
	return result;
}

int binary_to_decimal(std::string number)
{
	int result = 0, p = 1;
	for(int i = number.length() - 1; i >= 0; i--, p <<= 1)
		result += (number[i] - '0') * p;
	return result;
}

int mirrorBits(int a)
{
	std::string binar = decimal_to_binary(a);
	return binary_to_decimal(binar);
}

int main()
{
	int a;
	std::cin >> a;

	std::cout << mirrorBits(a);

	std::cout << std::endl;
	return 0;
}