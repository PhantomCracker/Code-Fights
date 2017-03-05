#include <iostream>
#include <string>

bool checkPalindrome(std::string inputString)
{
	return (inputString == std::string(inputString.rbegin(), inputString.rend()));
}

int main()
{
	std::string s;
	std::cin >> s;
	std::cout << checkPalindrome(s);
	std::cout << std::endl;
	return 0;
}