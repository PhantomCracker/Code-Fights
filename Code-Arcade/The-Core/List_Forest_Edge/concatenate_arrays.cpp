std::vector<int> solution(std::vector<int> a, std::vector<int> b)
{
	std::vector <int> c;
	c.reserve(a.size() + b.size());
	c.insert(c.end(), a.begin(), a.end());
	c.insert(c.end(), b.begin(), b.end());
	return c;
}
