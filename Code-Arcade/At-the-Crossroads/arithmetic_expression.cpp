#include <iostream>

bool arithmeticExpression(int A, int B, int C) 
{
	if(A + B == C)
		return true;
	if(A - B == C)
		return true;
	if(A * B == C)
		return true;
	if(A % B == 0)
		return true;
	return false;
}


int main()
{
	int A, B, C;
	std::cin >> A >> B >> C;

	std::cout << arithmeticExpression(A, B, C);

	std::cout << std::endl;
	return 0;
}