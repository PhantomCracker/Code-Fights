bool solution(std::string inputString)
{
	std::string str2;
	std::string str1;

	for(int i = 0; i < inputString.length() / 2; i++)
		str1.push_back(inputString[i]);
	for(int i = inputString.length() / 2; i < inputString.length(); i++)
		str2.push_back(inputString[i]);

	if(str1 == str2)
		return true;
	return false;
}
