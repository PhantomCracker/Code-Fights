std::string solution(std::string inputString)
{
	std::string result;
	result.push_back('(');

	for(int i = 0; i < inputString.length(); i++)
		result.push_back(inputString[i]);

	result.push_back(')');

	return result;
}
