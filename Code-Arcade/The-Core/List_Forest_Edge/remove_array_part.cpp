std::vector<int> solution(std::vector<int> inputArray, int l, int r)
{
	inputArray.erase(inputArray.begin() + l, inputArray.begin() + r + 1);
	return inputArray;
}
