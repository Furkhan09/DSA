int binarySearch(vector<int>&arr,int start,int end, int key )
{
	int s = start;
	int e = end;
	int mid = s + (e-s)/2;
	while(s<=e)
	{
		if(arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] < key)
		{
			s = mid + 1; 
		}
		else{
			e = mid -1;
		}
		mid = s + (e - s)/2;
	}
	return -1;
}
int findPivot(vector<int>&arr,int start,int end)
{
	int s = start;
	int e = end;
	int mid = s + (e-s)/2;
	while(s<e)
	{
		if(arr[mid]>= arr[0])
		{
			s = mid + 1;
		}
		else
		{
			e = mid;
		}
		mid = s + (e - s)/2;
	}
	return s;
}
int getElementIndex(vector<int> &arr, int target) {

	int size = arr.size();
	int pivot = findPivot(arr,0,size-1);
	if(target >= arr[pivot] && target <= arr[size - 1])
	{
		return binarySearch(arr,pivot,size-1,target);
	}
	else
	{
		return binarySearch(arr,0,pivot-1,target);
	}
}
