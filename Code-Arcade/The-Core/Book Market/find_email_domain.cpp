std::string solution(std::string address)
{
	std::string domain;
	for(int i = address.length() - 1; i >= 0; i--)
	{
		if(address[i] == '@')
			break;
		domain += address[i];
	}
	std::reverse(domain.begin(), domain.end());
	return domain;
}
