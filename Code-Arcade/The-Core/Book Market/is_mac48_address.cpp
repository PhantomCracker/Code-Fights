bool solution(std::string inputString)
{
	bool is_ok;
	if(inputString.length() != 17)
		return false;
	for(int i = 0; i < inputString.length(); i++)
	{
		if(i % 3 == 2)
		{
			if(inputString[i] != '-')
				return false;
		}
		else
		{
			if((inputString[i] >= 48 && inputString[i] <= 57) || (inputString[i] >= 65 && inputString[i] <= 70))
				is_ok = true;
			else
			{
				is_ok = false;
				break;
			}
		}
	}
	return is_ok;
}
