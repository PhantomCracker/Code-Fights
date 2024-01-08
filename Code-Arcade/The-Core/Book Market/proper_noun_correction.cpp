std::string solution(std::string noun)
{
	if(noun[0] >= 97 && noun[0] <= 122)
		noun[0] = noun[0] - 32;
	for(int i = 1; i < noun.length(); i++)
	{
		if(noun[i] >= 65 && noun[i] <= 90)
			noun[i] = noun[i] + 32;
	}
	return noun;
}
