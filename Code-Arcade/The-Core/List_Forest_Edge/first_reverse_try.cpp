std::vector<int> solution(std::vector<int> arr)
{
	int n = arr.size();
	if(n == 0 || n == 1)
		return arr;
	int aux;
	aux = arr[0];
	arr[0] = arr[arr.size()-1];
	arr[arr.size()-1] = aux;
	return arr;
}
