int number_of_divisors(int n)
{
	int divisors = 0;
	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			divisors++;
	return divisors;
}

std::vector<int> solution(int n)
{
	std::vector <int> d;
	std::vector <int> w;
	std::vector <int> result;
	int count_weakness = 0;
	int count_numbers = 0;
	int max_weakness = 0;

	for(int i = 1; i <= n; i++)
		d.push_back(number_of_divisors(i));

	for(int i = 0; i < n; i++)
	{
		count_weakness = 0;
		for(int j = 0; j <= i; j++)
		{
			if(d[j] > d[i])
				count_weakness++;
		}
		if(count_weakness > max_weakness)
			max_weakness = count_weakness;
		w.push_back(count_weakness);
	}

	int max_numbers = 0;
	for(int i = 0; i < n; i++)
		if(w[i] == max_weakness)
			max_numbers++;

	result.push_back(max_weakness);
	result.push_back(max_numbers);
	return result;
}
