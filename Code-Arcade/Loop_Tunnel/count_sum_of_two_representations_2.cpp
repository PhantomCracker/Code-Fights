#include <iostream>

int countSumOfTwoRepresentations2(int n, int l, int r) 
{
	int ways = 0;
	while(l <= r)
	{
		if(l + r == n)
			ways++;
		if(l + r <= n)
			l++;
		else 
			r--;
	}
	return ways;
}

int main()
{
	int n, l, r;
	std::cin >> n >> l >> r;

	std::cout << countSumOfTwoRepresentations2(n, l, r);

	std::cout << std::endl;
	return 0;
}