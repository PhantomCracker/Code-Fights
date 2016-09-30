#include <iostream>
#include <vector>
#include <string>
#include <bitset>

std::string decimal_to_binary(int number)
{
	std::string result = std::bitset<8>(number).to_string();
	return result;
}

int binary_to_decimal(std::string number)
{
	int result = 0, p = 1;
	for(int i = number.length() - 1; i >= 0; i--, p <<= 1)
		result += (number[i] - '0') * p;
	return result;
}

int arrayPacking(std::vector <int> a)
{
	std::string binar;
	for(int i = a.size()-1; i >= 0; i--)	
		binar += decimal_to_binary(a[i]);

	return binary_to_decimal(binar);
}

int main()
{
	std::vector <int> a;
	a.push_back(24);
	a.push_back(85);
	a.push_back(0);

	std::cout << arrayPacking(a); 

	std::cout << std::endl;
	return 0;
}