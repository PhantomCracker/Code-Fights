
int solution(int a, int b)
{
	a = a / 1.414;
	b = b / 1.414;
	a = a * b * 2 + a + b | 1;
    return a;
}
