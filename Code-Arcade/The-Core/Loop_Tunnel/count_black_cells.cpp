#include <iostream>

int max(int a, int b)
{
	if(a > b)
		return a;
	return b;
}

int min(int a, int b)
{
	if(a < b)
		return a;
	return b;
}

int solution(int n, int m)
{
	int answer = 0;
	for(int x = 1; x <= n; x++)
	{
		int l = (int) (m * 1l * (x-1) / n);
		if(m * 1l * (x-1) % n == 0)
			l--;
		int r = (int) (m * 1l * x / n);
		l = max(0, l);
		r = min(r, m-1);
		answer = answer + r - l + 1;
	}
	return answer;
}

int main()
{
	std::cout << std::endl;
	return 0 ;
}