bool solution(std::string string1, std::string string2)
{
	int count1 = 0;
	int count2 = 0;
	for(int i = 0; i < string1.length(); i++)
	{
		if(string1[i] != string2[i])
		{
			if(i == 0)
			{
				count1++;
				count2++;
			}
			else
			{
				if(string1[i-1] == string1[i])
					count1++;
				if(string2[i-1] == string2[i])
					count2++;
			}
			if(count1 != count2)
				return false;
		}
	}
	return true;
}
