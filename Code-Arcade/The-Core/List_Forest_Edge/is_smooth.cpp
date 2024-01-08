bool solution(std::vector<int> arr)
{
	if(arr.size() % 2 != 0)
	{
		if(arr[0] == arr[arr.size() - 1] && arr[0] == arr[arr.size() / 2] && arr[arr.size() - 1] == arr[arr.size() / 2])
			return true;
	}
	if(arr.size() % 2 == 0)
	{
		int sum = arr[arr.size() / 2] + arr[arr.size() / 2 - 1];
		if(arr[0] == arr[arr.size() - 1] && arr[0] == sum && arr[arr.size() - 1] == sum)
			return true;
	}
	return false;
}
