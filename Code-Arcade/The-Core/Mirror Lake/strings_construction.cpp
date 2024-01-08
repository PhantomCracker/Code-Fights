int solution(std::string a, std::string b)
{
	int a_occurences[26] = {0};
	int b_occurences[26] = {0};
	std::vector<int> result;
	int k = 0;
	for(int i = 0; i < a.length(); i++)
		a_occurences[a[i] - 'a']++;
	for(int i = 0; i < b.length(); i++)
		b_occurences[b[i] - 'a']++;

    int min = 55;
    for(int i = 0; i < 26; i++)
    	if(a_occurences[i] != 0)
    		min = std::min(min, b_occurences[i] / a_occurences[i]);

    return min;
}
