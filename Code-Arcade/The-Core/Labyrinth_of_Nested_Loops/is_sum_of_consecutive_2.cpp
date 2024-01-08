int solution(int n)
{
	int result = 0;
	for(int start = 1; start < n; start++)
	{
		int number = n;
		int subt = start;
		while(number > 0)
		{
			number = number - subt;
			subt++;
		}
		if(number == 0)
			result++;
	}
	return result;
}
