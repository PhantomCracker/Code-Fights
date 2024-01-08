int solution(std::vector<int> statues)
{
	std::sort(statues.begin(), statues.end());
	int number_of_statues = 0;
	for(int i = 0; i < statues.size() - 1; i++)
	{
		int difference = statues[i+1] - statues[i];
		if(difference > 1)
			number_of_statues = number_of_statues + difference - 1;
	}
	return number_of_statues;
}
