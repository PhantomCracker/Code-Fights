bool solution(int n)
{
	if(n == 1)
		return true;
	for(int i = 2; i <= sqrt(n); i++)
		for(int p = 2; p <= sqrt(n); p++)
			if(pow(i, p) == n)
				return true;
	return false;
}
