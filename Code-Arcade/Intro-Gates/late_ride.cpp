#include <iostream>

int lateRide(int n)
{
	int sum = 0;
	int time_on_bike = (n / 60) * 100 + (n % 60);
	while(time_on_bike != 0)
	{
		int d = time_on_bike % 10;
		sum = sum + d;
		time_on_bike = time_on_bike / 10;
	}
	return sum;
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << lateRide(n);

	std::cout << std::endl;
	return 0;
}