#include <iostream>

bool solution(int n)
{
	bool got_to_significant = false;
	while(n > 0)
	{
		if(n % 10 == 0 && got_to_significant)
			return true;
		else if(n % 10 != 0)
			got_to_significant = true;
		n = n / 10;
	}
	return false;
}

int main()
{
	std::cout << std::endl;
	return 0;
}