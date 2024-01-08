std::string solution(std::string startTag)
{
	std::string first;
	bool space = false;
	for(int i = 0; i < startTag.length(); i++)
	{
		if(startTag[i] == ' ')
		{
			space = true;
			break;
		}
		first += startTag[i];
		if(i == 0)
			first += '/';
	}
	if(space == true)
		first += '>';
	return first;
}
