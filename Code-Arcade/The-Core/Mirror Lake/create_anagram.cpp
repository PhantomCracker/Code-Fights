int solution(std::string s, std::string t)
{
	int s_occurences[26] = {0};
	int t_occurences[26] = {0};
	for(int i = 0; i < s.length(); i++)
	{
		s_occurences[s[i] - 'A']++;
		t_occurences[t[i] - 'A']++;
	}

	int result = 0;
	for(int i = 0; i < 26; i++)
		result = result + abs(s_occurences[i] - t_occurences[i]);

	return result / 2;
}
