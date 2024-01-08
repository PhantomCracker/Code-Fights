std::vector<int> solution(std::vector<int> arr)
{
	if(arr.size() % 2 == 0)
	{
		int mid = arr[arr.size() / 2] + arr[arr.size() / 2 - 1];
		arr[arr.size() / 2] = mid;
		arr.erase(arr.begin() + arr.size() / 2 - 1);
		return arr;
	}
	return arr;
}
